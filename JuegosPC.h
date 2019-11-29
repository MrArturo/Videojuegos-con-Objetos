/*Luis Arturo Rendon Inarritu
A01703572
Profesor Benjamin Valdes
*/

#ifndef JUEGOSPC_H
#define JUEGOSPC_H

#include "Videojuegos.h"
#include <iostream>
using namespace std;

//creo la clase JuegosPC, la cual es clase hija de Videojuegos
class JuegosPC : public Videojuegos{
    private:
        string plataforma;
    public:
        JuegosPC(string,string,float,int,string);
        void setPlataforma();
        string getPlataforma();
        void mostrarTodo();
};

//El constructor de la clase hija JuegosPC
JuegosPC::JuegosPC(string _nombre,string _genero,float _costo,int _edadMinima,string _plataforma) 
 : Videojuegos(_nombre,_genero,"Computadora",_costo,_edadMinima){
    plataforma = _plataforma;
}

void JuegosPC::setPlataforma(){
    cin>>plataforma;
}

string JuegosPC::getPlataforma(){
    return plataforma;
}

void JuegosPC::mostrarTodo(){
    cout<<"Nombre del juego: "<<nombre<<endl;
    cout<<"Genero del juego: "<<genero<<endl;
    cout<<"Costo del juego: "<<costo<<endl;
    cout<<"Restriccion de edad: De "<<edadMinima<<" en adelane"<<endl;
    cout<<"La plataforma donde se descarga el juego es: "<<plataforma<<endl;
    cout<<"\n";
}

#endif