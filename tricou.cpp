//
// Created by XboxShrimp on 21/11/2021.
//

#include "tricou.h"

tricou::tricou() : detalii(), id(0) {}

tricou::tricou(const detalii_articol &detalii, int id) : detalii(detalii), id(id) {}

tricou::tricou(const tricou &copie, int id) {
    this->detalii = copie.detalii;
    this->id = id;
    //cout<<"cc tricou \n";
}

tricou::~tricou() {
    //cout<<"destructor tricou \n";
}

tricou &tricou::operator=(const tricou &copie) {
    this->detalii = copie.detalii;
    std::cout << "op= tricou \n";
    return *this;
}

std::ostream &operator<<(std::ostream &os, const tricou &tricou) {
    os << "brand: " << tricou.detalii.getBrand() << "\npret: " << tricou.detalii.getPret()
       << "\nan_achizitionare: " << tricou.detalii.getAnAchizitionare() << "\nstare: " << tricou.detalii.getStare()
       << "\nculoare: " << tricou.detalii.getCuloare() << "\nmaterial: " << tricou.detalii.getMaterial() << "\nid: "
       << tricou.id << "\n";
    return os;
}

const detalii_articol &tricou::getDetalii() const {
    return detalii;
}

void tricou::setDetalii(const detalii_articol &detalii) {
    tricou::detalii = detalii;
}

int tricou::getId() const {
    return id;
}
