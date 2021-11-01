#include <iostream>
#include <vector>

using namespace std;

class detalii_articol{
    string brand;
    float pret;
    int an_achizitionare;
    int stare; //de la 1 la 10
    int id;

public:
    //constructor fara parametrii
    detalii_articol():brand("Necunoscut"),pret(0),an_achizitionare(0),stare(0),id(0){}

    //constructor cu parametrii
    detalii_articol(const string &brand, float pret, int anAchizitionare, int stare, int id) : brand(brand), pret(pret),
                                                                                               an_achizitionare(
                                                                                                       anAchizitionare),
                                                                                               stare(stare), id(id) {}

    const string &getBrand() const {
        return brand;
    }

    float getPret() const {
        return pret;
    }

    int getAnAchizitionare() const {
        return an_achizitionare;
    }

    int getStare() const {
        return stare;
    }

    int getId() const {
        return id;
    }

};



class tricou
{
    detalii_articol detalii;
    string culoare;
    string material;

public:
    //constructor fara parametrii
    tricou():detalii(),culoare("Necunoscuta"),material("Necunoscut"){}

    //constructor cu parametrii
    tricou(const detalii_articol &detalii, const string &culoare, const string &material) : detalii(detalii),
                                                                                            culoare(culoare),
                                                                                            material(material) {}

    //constructor de copiere
    tricou(const tricou& copie){
        this->detalii=copie.detalii;
        this->culoare=copie.culoare;
        this->material=copie.material;
        //cout<<"cc tricou \n";
    }

    //destructor
    ~tricou() {
        //cout<<"destructor tricou \n";
    }

    //operator =
    tricou& operator=(const tricou& copie){
        this->detalii=copie.detalii;
        this->culoare=copie.culoare;
        this->material=copie.material;
        cout<<"op= tricou \n";
        return *this;
    }

    //stream output detector
    friend ostream &operator<<(ostream &os, const tricou &tricou) {
        os << "brand: " << tricou.detalii.getBrand() << "\npret: "<<tricou.detalii.getPret()
        <<"\nan_achizitionare: "<<tricou.detalii.getAnAchizitionare()<<"\nstare: "<<tricou.detalii.getStare()
        <<"\nid: "<<tricou.detalii.getId()<<"\nculoare: " << tricou.culoare << "\nmaterial: " << tricou.material<<"\n";
        return os;
    }

    const detalii_articol &getDetalii() const {
        return detalii;
    }

};




class garderoba{
    vector <tricou> lista_tricouri;

public:
    //constructor fara parametrii
    garderoba(const vector<tricou> &listaTricouri) : lista_tricouri(listaTricouri) {}

    //functie adaugare tricou in vector
    void add_tricou(tricou &tricou) {
        lista_tricouri.push_back(tricou);
    };

    //functie returnare tricoul x
    tricou tricoul_x(int x){
        return lista_tricouri[x-1];
    };

    const vector<tricou> &getListaTricouri() const {
        return lista_tricouri;
    }

};

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

class outfit{
    string nume;
    int id;
    tricou t;

public:
    //constructor fara parametrii
    outfit():nume("Necunoscut"),id(0),t(){}

    //constructor cu parametrii
    outfit(const string &nume, int id, const tricou &t) : nume(nume), id(id), t(t) {}

    //stream output detector
    friend ostream &operator<<(ostream &os, const outfit &outfit) {
        os << "Outfitul \"" << outfit.nume << "\"\nid: " << outfit.id << "\ntricou: " << outfit.t.getDetalii().getId()<<"\n";
        return os;
    }

};
int main() {
//
detalii_articol d1("HM",35,2021,8,1);
detalii_articol d2("Koton",30,2021,9,2);
//
tricou t1(d1,"negru","bumbac");
tricou t2(d2,"bej","bumbac");
//
vector <tricou> lista_tricouri;
garderoba haine(lista_tricouri);
haine.add_tricou(t1);
haine.add_tricou(t2);
//
outfit o1("Toamna 1",1,t1);
outfit o2("Toamna 2",2,t2);
outfit o3("Vara 1",3,t1);
//
cout<<o1<<o2<<o3;
cout<<endl;
cout<<"Tricoul 1\n"<<haine.tricoul_x(1);
cout<<"Tricoul 2\n"<<haine.tricoul_x(2);
    return 0;
}
