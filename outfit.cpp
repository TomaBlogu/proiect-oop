//
// Created by XboxShrimp on 21/11/2021.
//

#include "outfit.h"

#include <utility>

outfit::outfit(std::string nume, int id, const tops &tricouOutfit, incaltaminte incaltaminteOutfit)
        : nume(std::move(nume)), id(id), tricou_outfit(tricouOutfit),
          incaltaminte_outfit(std::move(incaltaminteOutfit)) {}

std::ostream &operator<<(std::ostream &os, const outfit &outfit) {
    os << "nume: " << outfit.nume << " \nid: " << outfit.id << " \nid_tricou: " << outfit.tricou_outfit.getId()
       << "\nid_incaltaminte: " << outfit.incaltaminte_outfit.getId() << "\n";
    return os;
}

bool outfit::verif_compatibilitate(const tops &t) const {
    if (t.getDetalii().getCuloare() == incaltaminte_outfit.getDetalii().getCuloare())
        return true;
    return false;
}
