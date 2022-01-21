//
// Created by XboxShrimp on 23/12/2021.
//

#include "tricou.h"

tricou::tricou(const detalii_articol &detalii, int id) : tops(detalii, id) {};

tricou::tricou(const tricou &copie, int id) {
    this->setDetalii(copie.getDetalii());
    //cout<<"cc tops \n";
}

void tricou::informatii_spalare(tricou t) {
    if (t.getDetalii().getMaterial() == "bumbac")
        std::cout << "Spalati la maxim 60 de grade!" << std::endl;
    if (t.getDetalii().getCuloare() != "alb")
        std::cout << "Nu folositi clor!" << std::endl;
}

std::shared_ptr<tricou> tricou::clone() const {
    return std::make_shared<tricou>(*this);
}

void tricou::reducere(float procent) {
    detalii.setPret(detalii.getPret() * (procent * 2 / 100)); //reducerea este dubla la tricouri
}

