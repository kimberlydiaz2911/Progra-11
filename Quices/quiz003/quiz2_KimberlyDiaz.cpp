#include <iostream>
using namespace std;


            //Instrucciones

// N vagones, numerados del 1 al N. Dos tipos de operaciones
// 1. A p v: agregar v unidades de carga a cada uno de los vagones del 1 al p 
// 2. C p: Consultar cuantas unidades de carga tiene actualmente p 
// debe leer todas las operaciones y por cada operacion "C", imprimir en una 
// linea el resultado de la consulta (por reglon separado).

            /// Mi inetrpretacion
// debemos porner un array (no se como) para tener la cantidad de vagones en una lista 
// que se nos dice en el enunciado. 
// escribimos el valor de vagones y eso lo debe de poner en el N 
// escribimos el valor de q y eso lo debe de poner el las operaciones
// una vez que tenemos eso, aplicamos las funciones para agragar y consultar 


// N igual a cantidad de vagones.      
const int p = cin >> p;

int N[p] = {0};

// Q igual a cantidad de operaciones. 
int Q;  


int main(){
 
// N igual a cantidad de vagones.      
int p; 
cin >> p;

// Q igual a cantidad de operaciones. 
int Q;  
cin >> Q; 



Consultar(2);
Agregar(3,2);


}


int Agregar(int c, int a) {


//recorremos cada objeto en la cantidad c de vagones y a cada
//uno de estos vagones le agragamos el valor a que se solicita.
for (int i = 0; i = c; i++){
    
    // por cada uno de estos se le agraga a N en la posicion i, a
    N[i] += a;

}
}



int Consultar(int v){

for (int i = 0; i >= N; i++){
cout << N[i] << "\n";

}
}



// prometo que si entiendo lo que me pide, pero no se como hacerlo todo!!!
// no me sirve ni el cin. Esto es deprimente 