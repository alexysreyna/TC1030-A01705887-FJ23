#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <string>
#include <iostream>

using namespace std;

// Se definen variables que serán necesarias para una impresión
int fecha;

// Se crea la clase de interfaz, se planea que sea clase abstracta.
class interfaz
{
    public:
        // // La función agendar cita va a ser usada en sobrecarga
        virtual void aniadir_carrito(int id_accesorio) {
        }
        // La función agendar cita va a ser usada en sobreescritura
        virtual void agendar_cita(bool cita) {
        }
        
};

// Se crea la clase de accesorios
class accesorios:public interfaz
{
// A lo largo de las diferentes clases existen tanto métodos como atributos privados y públicos.
private:
    string n_accesorios;
    int id_accesorios;

public:
    void aniadir_carrito(int id_accesorios){
        cout<<"El id del accesorio a comprar es: "<<id_accesorios<<endl;
    }
};

// Esta es la clase para la personalización de dispositivos
// En esta y en las dos clases que siguen se hereda de interfaz para poder hacer uso de las funciones.
// Se busca sobreescribir y sobrecargar las funciones como ya se mencionó arriba.
class personalizado:public interfaz
{
private:
    string color;
    bool dis_per;
    bool doodles;
    int id_per;

public:
    void aniadir_carrito(int id_per) {
        cout<<"Tu id de personalizado es: "<<id_per<<endl;
    }
    void agendar_cita(bool cita) {
        if (cita == true){
            cout<<"¿Cuándo quieres agendar tu cita (sólo números)?: ";
            cin>>fecha;
            cout<<"La fecha de la cita es: "<<fecha<<endl;     
            }
        else{
            cout<<"Si necesitas agendar tu cita, contáctanos"<<endl;
            }    
    }
};

// Esta clase corresponde a la reparación de dispositivos
class reparado:public interfaz
{
private:
    string tipo_rep;
    bool ida_sucursal;
    int id_rep;

public:
    void aniadir_carrito(int id_rep, string tipo_rep, bool ida_sucursal) {
        cout<<"El id de la mejora que vas a adquirir es: "<<id_rep<<endl;
        cout<<"El tipo de mejora es: "<<tipo_rep<<endl;
        if (ida_sucursal == true){
            cout<<"Elegiste ir a sucursal"<<endl;
        }
        else{
            cout<<"No elegiste ir a la sucursal"<<endl;
        }      
    }

    void agendar_cita(bool cita) {
        if (cita == true){
            cout<<"¿Cuándo quieres agendar tu cita (sólo números)?: ";
            cin>>fecha;
            cout<<"La fecha de tu cita es: "<<fecha<<endl;     
            }
        else{
            cout<<"Si necesitas agendar tu cita, contáctanos"<<endl;
            }    
    }
};

// En esta clase se habla de las mejoras que se le pueden hacer a los celualres.
class mejora:public interfaz
{
private:
    string tipo_mej;
    bool posibilidad_mej;

public:
    void aniadir_carrito(string tipo_mej) {
        cout<<"Tu tipo de mejora es: "<<tipo_mej<<endl;
    }

    void agendar_cita(bool cita) {
        if (cita == true){
            cout<<"¿Cuándo quieres agendar tu cita (sólo números)?: ";
            cin>>fecha;
            cout<<"La cita se llevará acabo el: "<<fecha<<endl; ;     
            }
        else{
            cout<<"Si necesitas agendar tu cita, contáctanos"<<endl;
            }    
        
    }
};

#endif
