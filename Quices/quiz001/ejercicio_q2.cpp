#include <iostream>
using namespace std; 

int main () {

    int consumo;
    cout << "Ingrese su consumo mensual" << '\n';

    cin >> consumo;


    int tarifa_social; 
    cout << "Tiene su hojar tarifa social?" << '\n';

    cin >> tarifa_social;

    int subtotal;

    if (consumo < 200) {
        subtotal = consumo * 75;
    }
    
    else if ( consumo >= 200) {

        subtotal += 200 * 75;
        int consumo2 = consumo - 200;

        if (consumo2 > 1) {

            subtotal += (consumo2 - 200)* 110;
            int consumo3 = consumo - 200;
        
            if (consumo3 >= 1) {

                subtotal += consumo3 * 160;
            }
        }
    }
    else {

    }


int descuento; 

    if (tarifa_social == 1) {
        if (consumo <= 200) {

        descuento = consumo - (consumo/ 0.40);

    }
    else {

    }

}

    else {

    }

int total;

    if (tarifa_social == 1){

        total = subtotal - descuento;
    }

    cout << "Subtotal: " << subtotal << '\n';
    cout << "Descuento: " << descuento << '\n';
    cout << "Total: " << total << '\n';
    
}