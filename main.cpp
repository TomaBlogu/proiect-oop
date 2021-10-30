#include <iostream>

using namespace std;

class tricou
{
    string culoare;
    string material;
    string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    int id;

public:
    //constructor fara parametrii
    tricou():culoare("Necunoscuta"),material("Necunoscut"),brand("Necunoscut"),
    pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    tricou(const string &culoare, const string &material, const string &brand, float pret, int anAchizitionare, int stare, int id)
            : culoare(culoare), material(material), brand(brand), pret(pret), an_achizitionare(anAchizitionare), stare(stare)
            , id(id){}

    //constructor de copiere
    tricou(const tricou& copie){
        this->culoare=copie.culoare;
        this->material=copie.material;
        this->brand=copie.brand;
        this->pret=copie.pret;
        this->an_achizitionare=copie.an_achizitionare;
        this->stare=copie.stare;
        this->id=copie.id;
        cout<<"cc tricou \n";
    }

    //destructor
    ~tricou() {
        //cout<<"destructor tricou \n";
    }

    //operator =
    tricou& operator=(const tricou& copie){
        this->culoare=copie.culoare;
        this->material=copie.material;
        this->brand=copie.brand;
        this->pret=copie.pret;
        this->an_achizitionare=copie.an_achizitionare;
        this->stare=copie.stare;
        this->id=copie.id;
        cout<<"op= tricou \n";
        return *this;
    }

    //stream output detector
    friend ostream &operator<<(ostream &os, const tricou &tricou) {
        os << "culoare: " << tricou.culoare << " material: " << tricou.material << " brand: " << tricou.brand
           << " pret: " << tricou.pret << " an_achizitionare: " << tricou.an_achizitionare << " stare: " << tricou.stare
           << " id: " << tricou.id;
        return os;
    }

    //functie donare
    void donare(){
        if((this->stare<7 && this->an_achizitionare<2015) || this->stare<5)
            cout<<"De donat \n";
        else cout<<"De pastrat \n";
    };

    const string &getCuloare() const {
        return culoare;
    }

    const string &getMaterial() const {
        return material;
    }

    int getId() const {
        return id;
    }

    float getPret() const {
        return pret;
    }

    void setPret(float pret) {
        tricou::pret = pret;
    }

};

class pantaloni{
    string culoare;
    string material;
    string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    int id;

public:
    //constructor fara parametrii
    pantaloni():culoare("Necunoscuta"),material("Necunoscut"),brand("Necunoscut"),
             pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    pantaloni(const string &culoare, const string &material, const string &brand, float pret, int anAchizitionare,
              int stare, int id) : culoare(culoare), material(material), brand(brand), pret(pret),
                                   an_achizitionare(anAchizitionare), stare(stare), id(id) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const pantaloni &pantaloni) {
        os << "culoare: " << pantaloni.culoare << " material: " << pantaloni.material << " brand: " << pantaloni.brand
           << " pret: " << pantaloni.pret << " an_achizitionare: " << pantaloni.an_achizitionare << " stare: "
           << pantaloni.stare << " id: " << pantaloni.id;
        return os;
    }

    const string &getCuloare() const {
        return culoare;
    }

    const string &getMaterial() const {
        return material;
    }

    int getId() const {
        return id;
    }

    float getPret() const {
        return pret;
    }

    void setPret(float pret) {
        pantaloni::pret = pret;
    }

};

class incaltaminte{
    string culoare;
    string material;
    string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    int id;

public:
    //constructor fara parametrii
    incaltaminte():culoare("Necunoscuta"),material("Necunoscut"),brand("Necunoscut"),
                pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    incaltaminte(const string &culoare, const string &material, const string &brand, float pret, int anAchizitionare,
                 int stare, int id) : culoare(culoare), material(material), brand(brand), pret(pret),
                                      an_achizitionare(anAchizitionare), stare(stare), id(id) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const incaltaminte &incaltaminte) {
        os << "culoare: " << incaltaminte.culoare << " material: " << incaltaminte.material << " brand: "
           << incaltaminte.brand << " pret: " << incaltaminte.pret << " an_achizitionare: "
           << incaltaminte.an_achizitionare << " stare: " << incaltaminte.stare << " id: " << incaltaminte.id;
        return os;
    }

    const string &getCuloare() const {
        return culoare;
    }

    const string &getMaterial() const {
        return material;
    }

    int getId() const {
        return id;
    }

    float getPret() const {
        return pret;
    }

    void setPret(float pret) {
        incaltaminte::pret = pret;
    }

};

class accesorii{
    string tip_accesoriu;
    string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    int id;

public:
    //constructor fara parametrii
    accesorii():tip_accesoriu("Necunoscut"),brand("Necunoscut"), pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    accesorii(const string &tipAccesoriu, const string &brand, float pret, int anAchizitionare, int stare, int id)
            : tip_accesoriu(tipAccesoriu), brand(brand), pret(pret), an_achizitionare(anAchizitionare), stare(stare),
              id(id) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const accesorii &accesorii) {
        os << "tip_accesoriu: " << accesorii.tip_accesoriu << " brand: " << accesorii.brand << " pret: "
           << accesorii.pret << " an_achizitionare: " << accesorii.an_achizitionare << " stare: " << accesorii.stare
           << " id: " << accesorii.id;
        return os;
    }

    const string &getTipAccesoriu() const {
        return tip_accesoriu;
    }

    int getId() const {
        return id;
    }

    float getPret() const {
        return pret;
    }

    void setPret(float pret) {
        accesorii::pret = pret;
    }

};

class outfit{
    string nume;
    int id;
    tricou t;
    pantaloni p;
    incaltaminte i;
    accesorii a;

public:
    //constructor fara parametrii
    outfit():nume("Necunoscut"),id(0),t(),p(),i(),a(){}

    //constructor cu parametrii
    outfit(const string &nume, int id, const tricou &t, const pantaloni &p, const incaltaminte &i, const accesorii &a)
            : nume(nume), id(id), t(t), p(p), i(i), a(a) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const outfit &outfit) {
        os << "nume: " << outfit.nume << "\n id_outfit: " << outfit.id << "\n id_tricou: " << outfit.t.getId() << "\n id_pantaloni: " << outfit.p.getId() << "\n id_incaltaminte: "
           << outfit.i.getId() << "\n id_accesorii: " << outfit.a.getId();
        return os;
    }

};

int main() {
tricou t1("alb","bumbac","Nike",25,2020,4,1);
tricou t2("roz","bumbac","HM",30,2021,9,2);
pantaloni p1("bej","","Koton",80,2020,9,1);
incaltaminte i1("negru","textil/piele","Converse",120,2021,10,1);
accesorii a1("inel","HM",30,2020,10,1);
outfit o1("Facultate toamna 1",1,t2,p1,i1,a1);
cout<<o1;
    return 0;
}
