/*Luis Arturo Rendon Inarritu
A01703572
Profesor Benjamin Valdes
*/

#ifndef JUEGOSXBOX_H
#define JUEGOSXBOX_H

#include "Videojuegos.h"
#include <iostream>
using namespace std;

//creo otra clase hija de Videojuegos, llamada JuegosXBOX
class JuegosXBOX : public Videojuegos{
    private:
        bool usaXboxLive;
    public:
        JuegosXBOX(string,string,float,int,bool);
        void setUsaXboxLive();
        bool getUsaXboxLive();
        void mostrarTodo();
};


//El constructor de la clase hija Compania
JuegosXBOX::JuegosXBOX(string _nombre,string _genero,float _costo,int _edadMinima,bool _usaXboxLive)
 : Videojuegos(_nombre,_genero,"XboxOne",_costo,_edadMinima){
    usaXboxLive = _usaXboxLive;
}

void JuegosXBOX::setUsaXboxLive(){
    cin>>usaXboxLive;
}

bool JuegosXBOX::getUsaXboxLive(){
    return usaXboxLive;
}

void JuegosXBOX::mostrarTodo(){
    cout<<"Nombre del juego: "<<nombre<<endl;
    cout<<"Genero del juego: "<<genero<<endl;
    cout<<"Costo del juego: "<<costo<<endl;
    cout<<"Restriccion de edad: De "<<edadMinima<<" en adelante"<<endl;
    cout<<"Necesita Xbox Live: "<<usaXboxLive<<endl;
    cout<<"\n";
}

#endif