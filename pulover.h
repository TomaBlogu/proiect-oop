//
// Created by XboxShrimp on 03/06/2022.
//

#ifndef PROIECTE_PULOVER_H
#define PROIECTE_PULOVER_H

#include <memory>
#include "tops.h"

class pulover : virtual public tops {

public:
    explicit pulover(detalii_articol detalii);

    pulover(const pulover &copie);

    virtual ~pulover() override = default;

    static void informatii_spalare(pulover p);

    virtual std::shared_ptr<pulover> clone() const;

    void reducere(float procent) override;

};


#endif //PROIECTE_PULOVER_H
