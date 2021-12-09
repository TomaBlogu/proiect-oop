//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_OUTFIT_H
#define PROIECTE_OUTFIT_H

#include <string>
#include "tricou.h"
#include "incaltaminte.h"
#include "garderoba.h"

class outfit {
    std::string nume;
    int id;
    tricou tricou_outfit;
    incaltaminte incaltaminte_outfit;

public:
    //constructor fara parametrii
    outfit();

    //constructor cu parametrii
    outfit(const std::string &nume, int id, const tricou &tricouOutfit, const incaltaminte &incaltaminteOutfit);

    //stream output detector
    friend std::ostream &operator<<(std::ostream &os, const outfit &outfit);

    //functie verificare compatibilitate
    bool verif_compatibilitate(tricou t);

};


#endif //PROIECTE_OUTFIT_H
