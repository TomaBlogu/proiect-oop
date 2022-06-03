//
// Created by XboxShrimp on 21/11/2021.
//

#include "garderoba.h"
#include <vector>
#include <string.h>
#include "incaltaminte.h"

garderoba *garderoba::garderobaV = nullptr;

garderoba &garderoba::instance(const std::vector<std::shared_ptr<tricou>> &listaTricouri,
                               const std::vector<std::shared_ptr<incaltaminte>> &listaIncaltaminte) {
    if (garderobaV == nullptr)
        garderobaV = new garderoba(listaTricouri, listaIncaltaminte);
    return *garderobaV;
}

garderoba::garderoba(const std::vector<std::shared_ptr<tricou>> &listaTricouri,
                     const std::vector<std::shared_ptr<incaltaminte>> &listaIncaltaminte) : lista_tricouri(
        listaTricouri), lista_incaltaminte(listaIncaltaminte) {}

void garderoba::add_tricou(std::shared_ptr<tricou> Tricou) {
    this->lista_tricouri.push_back(Tricou->clone());
}

void garderoba::add_incaltaminte(std::shared_ptr<incaltaminte> incaltaminte) {
    lista_incaltaminte.push_back(incaltaminte);
}

std::shared_ptr<tricou> garderoba::tricoul_i(int i) {
    return lista_tricouri[i - 1];
}

const std::vector<std::shared_ptr<tricou>> garderoba::getListaTricouri() const {
    return lista_tricouri;
}

const std::vector<std::shared_ptr<incaltaminte>> garderoba::getListIncaltaminte() const {
    return lista_incaltaminte;
}

void garderoba::cautare_tricouri(std::string culoare) {
    for (std::shared_ptr<tricou> i: lista_tricouri)
        if (i->getDetalii().getCuloare() == culoare)
            std::cout << i->getId() << " ";
    std::cout << std::endl;
}


