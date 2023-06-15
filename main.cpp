#include <iostream>
#include "interfaz.h"
#include "carrito.h"

using namespace std;


//A lo largo del fin de semana se irán trabajando con más detalles del código.
int main(){
    int opsel1, opsel2;  
    //Pruebas
    cout<<"Bienvenido a TECLEX"<<endl;
    cout<<"Presiona 1 para ir al interfaz y 0 para salir de la página"<<endl;
    cin>>opsel1;
      
    if (opsel1 == 1) {
        cout<<"Este es un listado de nuestros servicios, selecciona el que desees"<<endl;
        cout<<"1 - Compra de accesorios"<<endl;
        cout<<"2 - Centro de personalizado"<<endl;
        cout<<"3 - Centro de reparado"<<endl;
        cout<<"4 - Mejora de dispositivos"<<endl;
        cin>>opsel2;
        if (opsel2 == 1) {
            cout<<"Bienvenido al centro de accesorios"<<endl;
            Accesorios accesorio1;
            accesorio1.aniadir_carrito(989383);
        }
        else if (opsel2 == 2) {
            cout<<"Este es el centro de personalizado"<<endl;
            // Aplicación sencilla de los punteros y el polimorfismo
            Personalizado per1;
            per1.agendar_cita(true, true, "rojo");
            Interfaz* person1 = new Personalizado;
            person1 -> aniadir_carrito(127892);
            person1 -> aniadir_carrito(184082);
            person1 -> aniadir_carrito(109309);
            delete person1;
        }
        else if (opsel2 == 3) {
            cout<<"Bienvenido al centro de reparado"<<endl;
            Reparado reparado1;
            reparado1.agendar_cita(true);
            reparado1.aniadir_carrito(12312,"cambio de pilas", true);
        }
        else if (opsel2 == 4) {
            cout<<"Este es el centro de mejora de dispositivos"<<endl;
            Mejora mej1;
            mej1.agendar_cita(true);
            mej1.aniadir_carrito("Mejora de RAM");
        }

    }

    if (opsel1 == 0) {
        cout<<"Gracias por elegir TECLEX, esperamos vuelva pronto"<<endl;
    }

    return 0;

};
