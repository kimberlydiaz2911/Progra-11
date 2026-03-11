// Sistema de coordenadas, 0 en el // 

#include <iostream>
using namespace std;




int main() {
    double t;  // tiempo que tarda en recorrer desde el punto cero (borde inferior de la ventana)
// hasta el suelo.
    double y;  // altura desde el punto cero (borde inferior de la ventana) hasta el suelo. Esta debe
//de ser negativa, ya que el suelo está hacia abajo, desde un punto cero inicial.
const double g = 9.8;

    cout << "Ingrese el tiempo t" << '\n';
    cin >> t; 

    cout << "Ingrese la altura y" << '\n';
    cin >> y;


// "h" será la altura desde que se deja caer el objeto sobre el borde superior de la ventana.
// es decir, una altura "h" + la altura de la ventana.


if (t < 0 ) {
    cout << "El tiempo debe ser positivo." << '\n';
    return 0;
}


if (y < 0) {
    cout << "La altura de la ventana debe ser positiva." << '\n';
    return 0;
}



// Empezamos a calcular 
// Nuestro punto de coordenadas es en el borde inferior de la ventana, es por esto que 
// podemos usar la fórmula "V^2 = Vo + 2*g*(h)". 
// Esta fórmula lo usaremos para poder calcular la velocidad en el borde inferior de la ventana. 



// Primer etapa (Desde la altura "h" hasta el borde inferior de la ventana (punto cero)). 
// Se nos dice que la bolita cae desde el reposo, es por esto que la velocidad inicial (Vo) 
// es igual a 0m/s. 

// Fórmula ->  V^2 = Vo + 2*g * (h).
// el unico dato que no tenemos es la h, a parte de la velocidad que queremos despejar 


double Vf = (y/t)- (g *t*t/2);


double h = (Vf*Vf) / (2*g);

cout << "h: " << h << "m" << '\n';


if (h <= 0){
    cout << "Los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana" << '\n';
    return 0;
}

    return 0;
}