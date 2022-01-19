//
// Created by XboxShrimp on 21/11/2021.
//

#include "tops.h"

tops::tops() : detalii(), id(0) {}

tops::tops(const detalii_articol &detalii, int id) : detalii(detalii), id(id) {}

tops::tops(const tops &copie, int id) {
    this->detalii = copie.detalii;
    this->id = id;
    //cout<<"cc tops \n";
}

tops::~tops() {
    //cout<<"destructor tops \n";
}

tops &tops::operator=(const tops &copie) {
    this->detalii = copie.detalii;
    std::cout << "op= tops \n";
    return *this;
}

std::ostream &operator<<(std::ostream &os, const tops &tricou) {
    os << "brand: " << tricou.detalii.getBrand() << "\npret: " << tricou.detalii.getPret()
       << "\nan_achizitionare: " << tricou.detalii.getAnAchizitionare() << "\nstare: " << tricou.detalii.getStare()
       << "\nculoare: " << tricou.detalii.getCuloare() << "\nmaterial: " << tricou.detalii.getMaterial() << "\nid: "
       << tricou.id << "\n";
    return os;
}

const detalii_articol &tops::getDetalii() const {
    return detalii;
}

void tops::setDetalii(const detalii_articol &detalii) {
    tops::detalii = detalii;
}

int tops::getId() const {
    return id;
}

void tops::setId(int id) {
    tops::id = id;
}
