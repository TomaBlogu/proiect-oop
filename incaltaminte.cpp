//
// Created by XboxShrimp on 05/12/2021.
//

#include "incaltaminte.h"

incaltaminte::incaltaminte() : detalii(), id(0) {}

incaltaminte::incaltaminte(const detalii_articol &detalii, int id) : detalii(detalii), id(id) {}

std::ostream &operator<<(std::ostream &os, const incaltaminte &incaltaminte) {
    os << "detalii: " << incaltaminte.detalii << " id: " << incaltaminte.id;
    return os;
}

const detalii_articol &incaltaminte::getDetalii() const {
    return detalii;
}

int incaltaminte::getId() const {
    return id;
}
