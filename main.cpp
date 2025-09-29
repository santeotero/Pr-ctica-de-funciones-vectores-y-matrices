#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    int positivo = pedirNumeroPositivo();
    cout << "Ingresaste: " << positivo << endl;

    int rango = pedirNumeroEntre(10 , 20);
    cout << "Ingresaste en rango [10,20]: " << rango << endl;

    float rangoFloat = pedirNumeroEntre(1.5f, 5.5f);
    cout << "Ingresaste en rango [1.5,5.5]: " << rangoFloat << endl;

    int matriz[30][12] = {0};

    matriz[0][0] = 10;
    matriz[0][1] = 5;
    matriz[0][2] = 15;

    sumarFilas(matriz);

    registroAsistencias();
    return 0;
}
