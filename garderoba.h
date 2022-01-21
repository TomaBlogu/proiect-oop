//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_GARDEROBA_H
#define PROIECTE_GARDEROBA_H

#include "tricou.h"
#include "incaltaminte.h"
#include <vector>

class garderoba {
    std::vector<std::shared_ptr<tricou>> lista_tricouri;
    std::vector<std::shared_ptr<incaltaminte>> lista_incaltaminte;

public:
    //constructor fara parametrii
    garderoba(const std::vector<std::shared_ptr<tricou>> &listaTricouri,
              const std::vector<std::shared_ptr<incaltaminte>> &listaIncaltaminte);

    //functie adaugare tops in vector
    void add_tricou(std::shared_ptr<tricou> Tricou);;

    //functie adaugare incaltaminte in vector
    void add_incaltaminte(std::shared_ptr<incaltaminte> incaltaminte);;

    //functie returnare tricoul i
    std::shared_ptr<tricou> tricoul_i(int i);;

    const std::vector<std::shared_ptr<tricou>> getListaTricouri() const;

    const std::vector<std::shared_ptr<incaltaminte>> getListIncaltaminte() const;

    void cautare_tricouri(std::string culoare);

};


#endif //PROIECTE_GARDEROBA_H
