//
// Created by XboxShrimp on 21/11/2021.
//

#include "tops.h"

int tops::nr_id = 0;

tops::tops() : id(++nr_id) {}

tops::tops(const detalii_articol &detalii) : detalii(detalii), id(++nr_id) {}

tops::tops(const tops &copie) : id(++nr_id) {
    this->detalii = copie.detalii;
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

void tops::reducere(float procent) {
    detalii.setPret(detalii.getPret() * (procent / 100));
}

