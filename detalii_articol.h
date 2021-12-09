//
// Created by XboxShrimp on 21/11/2021.
//

#ifndef PROIECTE_DETALII_ARTICOL_H
#define PROIECTE_DETALII_ARTICOL_H

#include <string>
#include <ostream>

class detalii_articol {
    std::string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    std::string culoare;
    std::string material;

public:
    //constructor fara parametrii
    detalii_articol();

    //constructor cu parametrii
    detalii_articol(const std::string &brand, float pret, int anAchizitionare, int stare,
                    const std::string &culoare, const std::string &material);

    const std::string &getBrand() const;

    float getPret() const;

    int getAnAchizitionare() const;

    int getStare() const;

    const std::string &getCuloare() const;

    const std::string &getMaterial() const;

    friend std::ostream &operator<<(std::ostream &os, const detalii_articol &articol);

};


#endif //PROIECTE_DETALII_ARTICOL_H
