#include <iostream>
#include <string> // Necesario para usar el tipo string
using namespace std;

bool esValido(int a, int b, int c) {
    // La desigualdad triangular: la suma de dos lados siempre debe ser mayor al tercero
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        //cout << "Triangulo valido" << "\n";
        return true;
    } else {
        //cout << "Triangulo no valido" << "\n";
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

int calcularPerimetro(int a, int b, int c) {
    return a + b + c;
}

void describirTriangulo(int a, int b, int c) {
    // Guardamos el resultado de la función en una variable
    bool valido = esValido(a, b, c);

    if (valido == false) {
        return; // Si no es válido, dejamos de ejecutar
    }

    tipoTriangulo(a, b, c);
    cout << "Perimetro: " << calcularPerimetro(a, b, c) << "\n";
}

int main() {
    int a, b, c;
    cout << "Ingrese los tres lados de su triangulo: " << endl;
    cin >> a >> b >> c;

    describirTriangulo(a, b, c);

    return 0;
}