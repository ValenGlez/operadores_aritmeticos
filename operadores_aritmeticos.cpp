#include <iostream>

using namespace std;

/*
     [x] declaramos las variables que vamos a usar como float
     [x] declaramos la variable del resultado que puede ser un float
     [x] inicializar las variables numericas
     [x] asignamos una operacion a la variable que muestra el resultado
     [x] mostrar el resultado de la operacion
*/


int main() {

    float n1 = 7;
    float n2 = 3;

    float resultado_suma = (n1 + n2);
    float resultado_resta = n1 - n2;
    float resultado_multiplicacion = n1 * n2;
    float resultado_division = n1 / n2;
    //resultado_operacion = n1 % n2;    // LA OPERACION RESTO SOLO FUNCIONA CON ENTEROS

    cout << "el resultado de la division es: " << resultado_division << endl;
    cout << "el resultado de la multiplicacion es:" << resultado_multiplicacion << endl;
    cout << "el resultado de la suma es:" << resultado_suma << endl;
    cout << "el resultado de la resta es:" << resultado_resta << endl;

    return 0;
}

/*
      suma      [ + ]
     resta      [ - ]
 multiplicacion [ * ]
    division    [ / ]
     resto      [ % ]
*/
