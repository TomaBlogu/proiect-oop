#include <iostream>
#include <vector>
#include "detalii_articol.h"
#include "tricou.h"
#include "garderoba.h"
#include "outfit.h"
#include "incaltaminte.h"

using namespace std;

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
//
    detalii_articol d_tricou1("HM", 35, 2021, 8, "negru", "bumbac");
    detalii_articol d_tricou2("Koton", 30, 2021, 9, "alb", "bumbac");
    detalii_articol d_incaltaminte1("Converse", 200, 2021, 9, "negru", "textil");
//
    tricou tricou_1(d_tricou1, 1);
    tricou tricou_2(tricou_1, 2);
    incaltaminte adidasi_converse(d_incaltaminte1, 1);
//
    vector<tricou> lista_tricouri;
    vector<incaltaminte> lista_incaltaminte;
    garderoba garderoba(lista_tricouri, lista_incaltaminte);
    garderoba.add_tricou(tricou_1);
    garderoba.add_tricou(tricou_2);
    garderoba.add_incaltaminte(adidasi_converse);
//
    outfit o1("Toamna 1", 1, tricou_1, adidasi_converse);
//verificare cc
    cout << "Tricoul 1\n" << tricou_1 << "Tricoul 2\n" << tricou_2;
    tricou_2.setDetalii(d_tricou2);
    cout << "Tricoul 1\n" << tricou_1 << "Tricoul 2\n" << tricou_2;
    cout << "------------\n";
//functii
    garderoba.cautare_tricouri("alb");
    if (o1.verif_compatibilitate(tricou_2))
        cout << "Compatibil";
    else cout << "Incompatibil";
    return 0;
}

//Outfit-ul ar trebui să primească doar items din garderoba adaugă o funcție în clasa garderobă pt asta