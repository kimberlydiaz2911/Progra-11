
#include <iostream>
#include <cctype>
using namespace std;



bool esPalindromo (string palabra){

    for (int i = 0; i < palabra.length(); i++) {

        palabra[i] = tolower(palabra[i]);
    }

     int n = palabra.length();
     for (int i = 0; i < n / 2; i++) {
        if (palabra[i] != palabra[n-1 -i]) {
            return false;
        }
}
return true;

}

int main() {

    cout << "Ingrese la palabra a verificar" << "\n";
    string palabra;
    cin >> palabra;

    if (esPalindromo(palabra)){
        cout << palabra << "Es palindromo" << "\n";
    }
    else {
        cout << palabra << "No es palindromo" << "\n";
    }
    return 0;
}
