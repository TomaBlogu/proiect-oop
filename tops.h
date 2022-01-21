//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_TOPS_H
#define PROIECTE_TOPS_H


#include <string>
#include <iostream>
#include "detalii_articol.h"

class tops {
protected:
    detalii_articol detalii;
    static int nr_id;
    const int id;

public:
    //constructor fara parametrii
    tops();

    //constructor cu parametrii
    explicit tops(const detalii_articol &detalii);

    //constructor de copiere
    tops(const tops &copie);

    //destructor
    virtual ~tops();

    //operator =
    tops &operator=(const tops &copie);

    //stream output detector
    friend std::ostream &operator<<(std::ostream &os, const tops &tricou);

    const detalii_articol &getDetalii() const;

    int getId() const;

    void setDetalii(const detalii_articol &detalii);

    virtual void reducere(float procent);
};


#endif //PROIECTE_TOPS_H
