
#include <iostream>
#include <cctype>
using namespace std;


// definimos la funicon para verificar si es palindromo 
bool esPalindromo (string palabra){

    // recorremos cada objeto en el largo de la palabra
    for (int i = 0; i < palabra.length(); i++) {

        //convertimos en minusculas
        palabra[i] = tolower(palabra[i]);
    }

    
     int n = palabra.length();

     // por cada objeto verificamos que la letra sea igual y 
     // las vamos diminuyendo, hasta llegar a la mitad, asi comprobamos
     for (int i = 0; i < n / 2; i++) {
        //si no se cumple es falso 
        if (palabra[i] != palabra[n-1 -i]) {
            return false;
        }
}
// si se cumple es verdaderp 
return true;

}

// llamamos la funcion main
int main() {

    // pedimos la palabra
    cout << "Ingrese la palabra a verificar" << "\n";
    string palabra;
    cin >> palabra;

    // si es palindromo 
    if (esPalindromo(palabra)){
        cout << palabra << "Es palindromo" << "\n";
    }
    else {
        // si no es palindromo
        cout << palabra << "No es palindromo" << "\n";
    }
    return 0;
}
