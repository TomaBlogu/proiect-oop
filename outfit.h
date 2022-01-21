//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_OUTFIT_H
#define PROIECTE_OUTFIT_H

#include <string>
#include "tops.h"
#include "incaltaminte.h"
#include "garderoba.h"

class outfit {
    std::string nume;
    int id{};
    tops tricou_outfit;
    incaltaminte incaltaminte_outfit;

public:
    //constructor fara parametrii
    outfit() = default;

    //constructor cu parametrii
    outfit(std::string nume, int id, const tops &tricouOutfit, incaltaminte incaltaminteOutfit);

    //stream output detector
    friend std::ostream &operator<<(std::ostream &os, const outfit &outfit);

    //functie verificare compatibilitate
    bool verif_compatibilitate(const tops &t) const;

};


#endif //PROIECTE_OUTFIT_H
