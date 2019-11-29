/*Luis Arturo Rendon Inarritu
A01703572
Profesor Benjamin Valdes
*/

#ifndef VIDEOJUEGOS_H
#define VIDEOJUEGOS_H
#include <iostream>
using namespace std;


//creo la clase padre
class Videojuegos{
    protected:
        string nombre;
        string genero;
        string consola;
        float costo;
        int edadMinima;
    public:
        Videojuegos(string,string,string,float,int);
        void setGenero();
        string getGenero();
        void setCosto();
        float getCosto();
        void setEdadMinima();
        int getEdadMinima();
        void setConsola();
        string getConsola();
        void setNombre();
        string getNombre();
};

//el constructor de la clase padre
Videojuegos::Videojuegos(string _nombre,string _genero,string _consola,float _costo,int _edadMinima){
    nombre = _nombre;
    genero = _genero;
    consola = _consola;
    costo = _costo;
    edadMinima = _edadMinima;
}

void Videojuegos::setGenero(){
    cin>>genero;
}

string Videojuegos::getGenero(){
    return genero;
}

void Videojuegos::setCosto(){
    cin>>costo;
}

float Videojuegos::getCosto(){
    return costo;
}

void Videojuegos::setEdadMinima(){
    cin>>edadMinima;
}

int Videojuegos::getEdadMinima(){
    return edadMinima;
}

void Videojuegos::setConsola(){
    cin>>consola;
}

string Videojuegos::getConsola(){
    return consola;
}

void Videojuegos::setNombre(){
    cin>>nombre;
}

string Videojuegos::getNombre(){
    return nombre;
}

#endif


