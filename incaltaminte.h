//
// Created by XboxShrimp on 05/12/2021.
//

#ifndef PROIECTE_INCALTAMINTE_H
#define PROIECTE_INCALTAMINTE_H


#include "detalii_articol.h"

class incaltaminte {
    detalii_articol detalii;
    int id;

public:
    //constructor fara parametrii
    incaltaminte();

    //constructor cu parametrii
    incaltaminte(const detalii_articol &detalii, int id);

    friend std::ostream &operator<<(std::ostream &os, const incaltaminte &incaltaminte);

    const detalii_articol &getDetalii() const;

    int getId() const;

};


#endif //PROIECTE_INCALTAMINTE_H
