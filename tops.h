//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_TOPS_H
#define PROIECTE_TOPS_H


#include <string>
#include <iostream>
#include "detalii_articol.h"

class tops {
    detalii_articol detalii;
    int id;

public:
    //constructor fara parametrii
    tops();

    //constructor cu parametrii
    tops(const detalii_articol &detalii, int id);

    //constructor de copiere
    tops(const tops &copie, int id);

    //destructor
    ~tops();

    //operator =
    tops &operator=(const tops &copie);

    //stream output detector
    friend std::ostream &operator<<(std::ostream &os, const tops &tricou);

    const detalii_articol &getDetalii() const;

    int getId() const;

    void setId(int id);

    void setDetalii(const detalii_articol &detalii);

};


#endif //PROIECTE_TOPS_H
