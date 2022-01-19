//
// Created by XboxShrimp on 21/11/2021.
//

#include "garderoba.h"
#include <vector>
#include <string.h>
#include "incaltaminte.h"

garderoba::garderoba(const std::vector<tricou> &listaTricouri, const std::vector<incaltaminte> &listaIncaltaminte)
        : lista_tricouri(listaTricouri), lista_incaltaminte(listaIncaltaminte) {}

void garderoba::add_tricou(tricou &tricou) {
    lista_tricouri.push_back(tricou);
}

void garderoba::add_incaltaminte(incaltaminte &incaltaminte) {
    lista_incaltaminte.push_back(incaltaminte);
}

tricou garderoba::tricoul_i(int i) {
    return lista_tricouri[i - 1];
}

const std::vector<tricou> &garderoba::getListaTricouri() const {
    return lista_tricouri;
}

const std::vector<incaltaminte> &garderoba::getListIncaltaminte() const {
    return lista_incaltaminte;
}

void garderoba::cautare_tricouri(std::string culoare) {
    for (tricou i: lista_tricouri)
        if (i.getDetalii().getCuloare() == culoare)
            std::cout << i.getId() << " ";
}


