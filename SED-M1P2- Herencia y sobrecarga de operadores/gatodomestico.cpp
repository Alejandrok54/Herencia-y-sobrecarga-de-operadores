#include "felino.cpp"

class GatoDomestico : public Felino{
private:
    //Dueño
    string dueno;
public:
    GatoDomestico(){

        setRaza("Gato Domestico");
        setDieta("Croquetas");
        setAn(2023);
        setLugarN("Casa");
        setDueno("Alejandro Diaz");
    }

     string getDueno(){
        return dueno;
    }

    void setDueno(const string& d){
        dueno = d;
    }

//    friend GatoDomestico& operator+(GatoDomestico& x,GatoDomestico& y){
//        x.setDieta(x.getDieta() + y.getDieta());
//        x.setRaza(x.getRaza() + y.getRaza());
//        x.setAn(x.getAn() + y.getAn());
//        x.setLugarN(x.getLugarN() + y.getLugarN());
//        x.dueno = x.dueno + y.dueno;
//        return x;
//    }
};
