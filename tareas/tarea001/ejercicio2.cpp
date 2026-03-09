#include <iostream>
using namespace std;




int main() {
    double v, T;

// Ingresamos la velocidad

    cout << "Ingrese una velocidad." << '\n';
    cin >> v;

// Ingresamos la temperatura 

    cout << "Ingrese una temperatura." << '\n';
    cin >> T;

// Verificamos que los datos de velocidad y temperatura sean correctos 

    if (v >= 0) {
        cout << "Velocidad aceptada." << '\n';
    }
    else {
        cout << "La velocidad no puede ser negativa." << '\n';
        return 0; 
    }

    if (T > -273.15) { 
        cout << "Temperatura acepatada." << '\n';
    }
    else {
        cout << "La temperatura no puede ser menor o igual al cero absoluto (-273.15 C)." << '\n';
    }

// Definimos nuestras variables constantes

    const double x = 331; 
    const double y = 0.6;
    const double z = -273.15;

// Definimos las variables que vamos a estar utilizando 

    double vs = x + y * T;
    double M = (v/ vs);

// Imprimimos los datos 

    cout << "vs: " << vs << '\n';
    cout << "M" << M << '\n';

// Comprobamos todos lo casos que podemos tener de número de Mach

    if (M < 0.8) {
        cout << "Regimen: Subsonico" << '\n';
    }
    else if (M >= 0.8 && M < 1.2) {
        cout << "Regimen : Transonico" << '\n';
    }
    else if (M >= 1.2 && M < 5.0) {
        cout << "Regimen: Supersonico" << '\n';
    }
    else if (M >= 5.0) {
        cout << "Regimen: Hipersonico" << '\n';
    }

    return 0;

}