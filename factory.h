//
// Created by XboxShrimp on 21/01/2022.
//

#ifndef PROIECTE_FACTORY_H
#define PROIECTE_FACTORY_H

#include "tricou.h"
#include "incaltaminte.h"
#include "pulover.h"

class factory {
public:
    static tricou tricou_Hm_basic() {
        detalii_articol d_tricou1("HM", 35, 2021, 10, "negru", "bumbac");
        return tricou(d_tricou1);
    }

    static tricou tricou_Koton_basic() {
        detalii_articol d_tricou1("Koton", 40, 2021, 10, "alb", "bumbac");
        return tricou(d_tricou1);
    }

    static incaltaminte incaltaminte_basic() {
        detalii_articol d_incaltaminte1("Converse", 200, 2021, 9, "negru", "textil");
        return incaltaminte(d_incaltaminte1, 1);
    }

    static pulover pulover_basic() {
        detalii_articol d_pulover1("Koton", 100, 2022, 10, "bej", "bumbac");
        return pulover(d_pulover1);
    }
};


#endif //PROIECTE_FACTORY_H
