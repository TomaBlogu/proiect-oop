//
// Created by XboxShrimp on 23/12/2021.
//

#ifndef PROIECTE_TRICOU_H
#define PROIECTE_TRICOU_H

#include "tops.h"
#include <memory>

class tricou : public tops {

public:
    tricou(const detalii_articol &detalii, int id, int test);

    tricou(const tricou &copie, int id);

};
#endif //PROIECTE_TRICOU_H