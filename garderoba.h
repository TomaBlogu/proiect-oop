//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_GARDEROBA_H
#define PROIECTE_GARDEROBA_H

#include "tricou.h"
#include "incaltaminte.h"
#include <vector>

class garderoba {
    std::vector<tricou> lista_tricouri;
    std::vector<incaltaminte> lista_incaltaminte;

public:
    //constructor fara parametrii
    garderoba(const std::vector<tricou> &listaTricouri, const std::vector<incaltaminte> &listaIncaltaminte);

    //functie adaugare tricou in vector
    void add_tricou(tricou &tricou);

    //functie adaugare incaltaminte in vector
    void add_incaltaminte(incaltaminte &incaltaminte);;

    //functie returnare tricoul i
    tricou tricoul_i(int i);;

    const std::vector<tricou> &getListaTricouri() const;

    const std::vector<incaltaminte> &getListIncaltaminte() const;

    tricou cautare_tricouri(std::string culoare);

};


#endif //PROIECTE_GARDEROBA_H
