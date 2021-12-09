//
// Created by XboxShrimp on 21/11/2021.
//

#include "outfit.h"

outfit::outfit() : nume("Necunoscut"), id(0), tricou_outfit(), incaltaminte_outfit() {}

outfit::outfit(const std::string &nume, int id, const tricou &tricouOutfit, const incaltaminte &incaltaminteOutfit)
        : nume(nume), id(id), tricou_outfit(tricouOutfit), incaltaminte_outfit(incaltaminteOutfit) {}

std::ostream &operator<<(std::ostream &os, const outfit &outfit) {
    os << "nume: " << outfit.nume << " \nid: " << outfit.id << " \nid_tricou: " << outfit.tricou_outfit.getId()
       << "\nid_incaltaminte: " << outfit.incaltaminte_outfit.getId() << "\n";
    return os;
}

bool outfit::verif_compatibilitate(tricou t) {
    if (t.getDetalii().getCuloare() == incaltaminte_outfit.getDetalii().getCuloare())
        return true;
    return false;
}
