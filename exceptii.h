//
// Created by XboxShrimp on 19/01/2022.
//

#ifndef PROIECTE_EXCEPTII_H
#define PROIECTE_EXCEPTII_H

#include <stdexcept>

class eroare_articol : public std::runtime_error {
public:
    eroare_articol(const std::string &arg);
};

class eroare_stare : public eroare_articol {
public:
    eroare_stare();
};

#endif //PROIECTE_EXCEPTII_H
