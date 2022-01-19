//
// Created by XboxShrimp on 21/11/2021.
//

#include "detalii_articol.h"
#include "exceptii.h"
#include <iostream>

detalii_articol::detalii_articol() : brand("Necunoscut"), pret(0), an_achizitionare(0), stare(0),
                                     culoare("Necunoscuta"), material("Necunoscut") {}

detalii_articol::detalii_articol(const std::string &brand, float pret, int anAchizitionare, int stare,
                                 const std::string &culoare, const std::string &material) : brand(brand), pret(pret),
                                                                                            an_achizitionare(
                                                                                                    anAchizitionare),
                                                                                            stare(stare),
                                                                                            culoare(culoare),
                                                                                            material(material) {
    if (stare < 1 || stare > 10)
        throw eroare_stare();
}

std::ostream &operator<<(std::ostream &os, const detalii_articol &articol) {
    os << "brand: " << articol.brand << " pret: " << articol.pret << " an_achizitionare: " << articol.an_achizitionare
       << " stare: " << articol.stare << " culoare: " << articol.culoare << " material: " << articol.material;
    return os;
}

const std::string &detalii_articol::getBrand() const {
    return brand;
}

float detalii_articol::getPret() const {
    return pret;
}

int detalii_articol::getAnAchizitionare() const {
    return an_achizitionare;
}

int detalii_articol::getStare() const {
    return stare;
}

const std::string &detalii_articol::getCuloare() const {
    return culoare;
}

const std::string &detalii_articol::getMaterial() const {
    return material;
}
