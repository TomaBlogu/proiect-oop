//
// Created by XboxShrimp on 19/01/2022.
//

#include "exceptii.h"

eroare_articol::eroare_articol(const std::string &arg) : runtime_error("Eroare articol:" + arg) {}

eroare_stare::eroare_stare() : eroare_articol("Starea trebuie sa fie intre 1 si 10!") {}
