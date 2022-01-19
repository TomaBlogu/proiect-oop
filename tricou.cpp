//
// Created by XboxShrimp on 23/12/2021.
//

#include "tricou.h"

tricou::tricou(const detalii_articol &detalii, int id) : tops(detalii, id) {};

tricou::tricou(const tricou &copie, int id) {
    this->setDetalii(copie.getDetalii());
    this->setId(id);
    //cout<<"cc tops \n";
}

