#include <iostream>
#include <vector>
#include "detalii_articol.h"
#include "tops.h"
#include "garderoba.h"
#include "outfit.h"
#include "incaltaminte.h"
#include "tricou.h"
#include "exceptii.h"
#include "factory.h"

/*class accesorii{
    detalii_articol detalii;
    string tip_accesoriu;

public:
    //constructor fara parametrii
    accesorii():tip_accesoriu("Necunoscut"),brand("Necunoscut"), pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    accesorii(const string &tipAccesoriu, const string &brand, float pret, int anAchizitionare, int stare, int id)
            : tip_accesoriu(tipAccesoriu), brand(brand), pret(pret), an_achizitionare(anAchizitionare), stare(stare),
              id(id) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const accesorii &accesorii) {
        os << "detalii: " << accesorii.detalii << " tip_accesoriu: " << accesorii.tip_accesoriu;
        return os;
    }

};*/

int main() {
    try {
        tricou tricou_1 = factory::tricou_Hm_basic();
        tricou tricou_2 = factory::tricou_Koton_basic();
        tricou::informatii_spalare(tricou_1);
        incaltaminte adidasi_converse = factory::incaltaminte_basic();
        outfit o1("Toamna 1", 1, tricou_1, adidasi_converse);
//

//
        std::vector<std::shared_ptr<tricou>> lista_tricouri;
        std::vector<std::shared_ptr<incaltaminte>> lista_incaltaminte;
        garderoba garderoba(lista_tricouri, lista_incaltaminte);
        garderoba.add_tricou(std::make_shared<tricou>(tricou_1));
        garderoba.add_tricou(std::make_shared<tricou>(tricou_2));
        garderoba.add_incaltaminte(std::make_shared<incaltaminte>(adidasi_converse));
//
        garderoba.cautare_tricouri("negru");
//verificare cc
        std::cout << "Tricoul 1\n" << tricou_1 << "Tricoul 2\n" << tricou_2;
        tricou_1.reducere(25);
        //tricou_2.setDetalii(d_tricou2);
        std::cout << "Tricoul 1\n" << tricou_1 << "Tricoul 2\n" << tricou_2;
        std::cout << "------------\n";
//
        if (o1.verif_compatibilitate(tricou_2))
            std::cout << "Compatibil";
        else std::cout << "Incompatibil";
//
    } catch (eroare_stare &eroare) {
        std::cout << eroare.what();
    }

    return 0;

}
