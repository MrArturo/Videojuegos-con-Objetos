/*Luis Arturo Rendon Inarritu
A01703572
Profesor Benjamin Valdes
*/

#ifndef JUEGOSSONY_H
#define JUEGOSSONY_H

#include "Videojuegos.h"
#include <iostream>
using namespace std;

class JuegosSony : public Videojuegos{
    private:
        bool usaPlayNetwork; 
        bool exclusivo;
    public:
        JuegosSony(string,string,float,int,bool,bool);
        void setUsaPlayNetwork();
        bool getUsaPlayNetwork();
        void setExclusivo();
        bool getExclusivo();
        void mostrarTodo();
};

JuegosSony::JuegosSony(string _nombre,string _genero,float _costo,int _edadMinima,bool _usaPlayNetwork,
bool _exclusivo) : Videojuegos(_nombre,_genero,"PlayStation",_costo,_edadMinima){
    usaPlayNetwork = _usaPlayNetwork;
    exclusivo = _exclusivo;
}

void JuegosSony::setUsaPlayNetwork(){
    cin>>usaPlayNetwork;
}

bool JuegosSony::getUsaPlayNetwork(){
    return usaPlayNetwork;
}

void JuegosSony::setExclusivo(){
    cin>>exclusivo;
}

bool JuegosSony::getExclusivo(){
    return exclusivo;
}

void JuegosSony::mostrarTodo(){
    cout<<"Nombre del juego: "<<nombre<<endl;
    cout<<"Genero del juego: "<<genero<<endl;
    cout<<"Costo del juego: "<<costo<<endl;
    cout<<"Restriccion de edad: De "<<edadMinima<<" en adelante"<<endl;
    cout<<"Tiene multijugador online: "<<usaPlayNetwork<<endl;
    cout<<"Es exclusivo de PlayStation: "<<exclusivo<<endl;
    cout<<"\n";
}

#endif