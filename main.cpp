#include <iostream>
#include "interfaz.h"
#include "carrito.h"

using namespace std;


//A lo largo del fin de semana se irán trabajando con más detalles del código.

int main(){
    
    //Pruebas

    accesorios accesorios1;
    accesorios1.aniadir_carrito(127892);

    reparado reparado1;
    reparado1.agendar_cita(true);
    reparado1.aniadir_carrito(12312,"cambio de pilas", true);

    personalizado per1;
    per1.agendar_cita(true);
    per1.aniadir_carrito(431219);

    mejora mej1;
    mej1.agendar_cita(true);
    mej1.aniadir_carrito("mejora de ram");

}