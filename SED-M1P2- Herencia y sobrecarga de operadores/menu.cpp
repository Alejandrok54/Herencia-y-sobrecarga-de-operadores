#include "gatodomestico.cpp"

using namespace std;

class Menu{
    private:
        GatoDomestico minino;
        Felino estrellaCirco;
        Mamifero m;
    public:
        Menu(){
            showMenu();
        }

        void showMenu(){
            int op;
            string data;
            m = minino+estrellaCirco;

            do{
                cout<<"\n\n1.Imprimir dieta de Minino y EstrellaCirco"<<endl;
                cout<<"2.Imprimir anio y lugar de nacimiento de Minino y EstrellaCirco"<<endl;
                cout<<"3.Cambiar el nombre del dueno de Minino"<<endl;
                cout<<"4.Imprimir raza de Minino y EstrellaCirco"<<endl;
                cout<<"5.Cambiar el nombre del circo que actua EstrellaCirco"<<endl;
                cout<<"6.Salir"<<endl;
                cout<<"Opcion: ";cin>>op;

                switch(op){
                case 1:
                    cout<<m.getDieta()<<endl;
                    break;
                case 2:
                    cout<<"\nAnio Minino: "<<minino.getAn()<<"\nAnio EstrellaCirco: "<<estrellaCirco.getAn()<<endl;
                    cout<<m.getLugarN()<<endl;
                    break;
                case 3:
                    cout<<"Ingrese el nombre del nuevo dueno: ";cin>>data;
                    minino.setDueno(data);
                    break;
                case 4:
                    cout<<m.getRaza()<<endl;
                    break;
                case 5:
                     cout<<"Ingrese el nombre del nuevo circo: ";cin>>data;
                    estrellaCirco.setLugarT(data);

                    break;
                case 6:
                    break;
                default:
                    cout<<"Opcion Invalida"<<endl<<endl;
                }
            }while(op!=6);
        }
};

int main()
{
    Menu m;
    return 0;
}

