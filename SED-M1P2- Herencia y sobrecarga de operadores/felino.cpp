
#include "mamifero.cpp"

using namespace std;

class Felino: public Mamifero{
private:
    //Lugar-trabajo
    string lugarT;
public:
    Felino(){

        setRaza("Felino");
        setDieta("Carne fresca");
        setAn(2023);
        setLugarN("Calle");
        setLugarT("Circo Ataide");
    }

    string getLugarT(){
        return lugarT;
    }

    void setLugarT(const string& l){
        lugarT = l;
    }

//    friend Felino& operator+(Felino& x,Felino& y){
//        x.setDieta(x.getDieta() + y.getDieta());
//        x.setRaza(x.getRaza() + y.getRaza());
//        x.setAn(x.getAn() + y.getAn());
//        x.setLugarN(x.getLugarN() + y.getLugarN());
//        x.lugarT = x.lugarT + y.lugarT;
//        return x;
//    }
};
