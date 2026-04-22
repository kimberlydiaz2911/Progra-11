#include <iostream>
#include <string> // Necesario para usar el tipo string
using namespace std;

bool esValido(int a, int b, int c) {
    // La desigualdad triangular: la suma de dos lados siempre debe ser mayor al tercero
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        return true;
    } else {
        
        return false;
    }
}


void tipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        cout << "Tipo: Triangulo equilatero" << "\n";
    } 
    else if (a == b || b == c || a == c) {
        // Si no fue equilátero pero tiene dos lados iguales
        cout << "Tipo: Triangulo isosceles" << "\n";
    } 
    else {
        // Si no fue ninguno de los anteriores
        cout << "Tipo: Triangulo escaleno" << "\n";
    }
}

// calculamos el perimetro 
int calcularPerimetro(int a, int b, int c) {
    return a + b + c;
}

// describimos el triangulo
void describirTriangulo(int a, int b, int c) {
    // Guardamos el resultado de la función en una variable
    bool valido = esValido(a, b, c);

    if (valido == false) {
        return; // Si no es válido, dejamos de ejecutar
    }

    tipoTriangulo(a, b, c);
    cout << "Perimetro: " << calcularPerimetro(a, b, c) << "\n";
}

//Llamamos la funcion main 
int main() {
    // definimos las variables 
    int a, b, c;
    // Pedimos que ingrese los datos 
    cout << "Ingrese los tres lados de su triangulo: " << "\n";
    cin >> a >> b >> c;
// Llamamos la funcion describir tiangulo 
    describirTriangulo(a, b, c);

    return 0;
}