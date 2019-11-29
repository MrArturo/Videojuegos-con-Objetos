/*Luis Arturo Rendon Inarritu
A01703572
Profesor Benjamin Valdes
*/

/*no llamo la clase Videojuegos debido a que 
la manejo como clase abstracta*/ 
#include "JuegosPC.h"
#include "JuegosXBOX.h"
#include "JuegosSony.h"

#include <iostream>
using namespace std;

int main(){

    JuegosPC LOL("League of Legends","MOBA",0.00,15,"Riot Launcher");
    JuegosSony GOW("God of War","Accion/Aventura",999.99,18,false,true);
    JuegosXBOX Halo("Halo","Accion/First-person Shooter",1099.99,18,true);

    LOL.mostrarTodo();
    GOW.mostrarTodo();
    Halo.mostrarTodo();

    /*Pauso el programa, hasta que el 
    usuario presione alguna tecla*/
    system("pause");
    return 0;
}