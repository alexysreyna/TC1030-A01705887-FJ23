#include <iostream>
#include "interfaz.h"
#include "carrito.h"

using namespace std;


//A lo largo del fin de semana se irán trabajando con más detalles del código.
int main(){
    int opsel;    
    //Pruebas
    cout<<"Bienvenido a TECLEX"<<endl;
    cout<<"Se le informa a los usuarios que el carrito de compras sigue en proceso"<<endl;
    cout<<"Este es un listado de nuestros servicios, selecciona el que desees"<<endl;
    cout<<"1 - Interfaz principal"<<endl;
    cout<<"2 - Compra de accesorios"<<endl;
    cout<<"3 - Centro de personalizado"<<endl;
    cout<<"4 - Centro de reparado"<<endl;
    cout<<"5 - Mejora de dispositivos"<<endl;
    cin>>opsel;

    if (opsel == 1) {
        cout<<"El interfaz sigue en proceso ..."<<endl;
    }
    else if (opsel == 2) {
        cout<<"Bienvenido a la sección de accesorios"<<endl;
        cout<<"Se está trabajando en está sección"<<endl;
    }
    else if (opsel == 3) {
        cout<<"Este es el centro de personalizado"<<endl;
        reparado reparado1;
        reparado1.agendar_cita(true);
        reparado1.aniadir_carrito(12312,"cambio de pilas", true);
    }
    else if (opsel == 4) {
        cout<<"Bienvenido al centro de reparado"<<endl;
        personalizado per1;
        per1.agendar_cita(true);
        // Esta fue la manera en la que se me ocurrió implementar el polimorfismo
        // No obstante se aceptan otras sugerencias
        interfaz* person1 = new personalizado;
        person1 -> aniadir_carrito(127892);
        person1 -> aniadir_carrito(184082);
        person1 -> aniadir_carrito(109309);
        delete person1;
    }
    else if (opsel == 5) {
        cout<<"Este es el centro de mejora de dispositivos"<<endl;
        mejora mej1;
        mej1.agendar_cita(true);
        mej1.aniadir_carrito("Mejora de RAM");
    }

    return 0;

}
