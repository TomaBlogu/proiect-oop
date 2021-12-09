//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_TRICOU_H
#define PROIECTE_TRICOU_H


#include <string>
#include <iostream>
#include "detalii_articol.h"

class tricou {
    detalii_articol detalii;
    int id;

public:
    //constructor fara parametrii
    tricou();

    //constructor cu parametrii
    tricou(const detalii_articol &detalii, int id);

    //constructor de copiere
    tricou(const tricou &copie, int id);

    //destructor
    ~tricou();

    //operator =
    tricou &operator=(const tricou &copie);

    //stream output detector
    friend std::ostream &operator<<(std::ostream &os, const tricou &tricou);

    const detalii_articol &getDetalii() const;

    int getId() const;

    void setDetalii(const detalii_articol &detalii);

};


#endif //PROIECTE_TRICOU_H
