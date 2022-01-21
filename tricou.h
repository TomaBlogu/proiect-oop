//
// Created by XboxShrimp on 23/12/2021.
//

#ifndef PROIECTE_TRICOU_H
#define PROIECTE_TRICOU_H

#include "tops.h"
#include <memory>

class tricou : virtual public tops {

public:
    explicit tricou(detalii_articol detalii);

    tricou(const tricou &copie);

    virtual ~tricou() override = default;

    static void informatii_spalare(tricou t);

    virtual std::shared_ptr<tricou> clone() const;

    void reducere(float procent) override;

};
#endif //PROIECTE_TRICOU_H