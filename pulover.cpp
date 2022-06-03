//
// Created by XboxShrimp on 03/06/2022.
//

#include "pulover.h"


pulover::pulover(detalii_articol detalii) : tops(detalii) {};

pulover::pulover(const pulover &copie) : tops() {
    this->setDetalii(copie.getDetalii());
    //cout<<"cc tops \n";
}

void pulover::informatii_spalare(pulover p) {
    if (p.getDetalii().getMaterial() == "bumbac")
        std::cout << "Spalati la maxim 40 de grade!" << std::endl;
    if (p.getDetalii().getCuloare() != "alb")
        std::cout << "Nu folositi clor!" << std::endl;
}

std::shared_ptr<pulover> pulover::clone() const {
    return std::make_shared<pulover>(*this);
}


void pulover::reducere(float procent) {
    detalii.setPret(detalii.getPret() - detalii.getPret() * (procent * 2 / 100)); //reducerea este dubla la pulovere
}
