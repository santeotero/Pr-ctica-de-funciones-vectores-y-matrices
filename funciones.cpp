#include <iostream>
using namespace std;
#include "funciones.h"


  int pedirNumeroPositivo() {
    int numero;
    do{
        cout << "Ingrese un numero positivo: ";
        cin >> numero;
        if (numero <= 0) {
            cout << "El numero debe ser mayor a cero." << endl;
        }
    } while (numero <=0);
    return numero;
  }

  int pedirNumeroEntre(int inicio, int fin) {
    int numero;
    do{
        cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
        cin >> numero;
        if (numero < inicio || numero > fin) {
            cout << "ERROR. Numero fuera de rango." << endl;
        }
    } while (numero < inicio || numero > fin);
    return numero;
  }

  float pedirNumeroEntre(float inicio, float fin) {
    float numero;
    do{
        cout << "Ingrese un numero entre " << inicio << " y " << fin << ": ";
        cin >> numero;
        if (numero < inicio || numero > fin) {
            cout << "ERROR. Numero fuera de rango." << endl;
        }
    } while (numero < inicio || numero > fin);
    return numero;
  }

  void sumarFilas(int matriz[30][12]) {
    for (int fila = 0; fila < 30; fila++) {
        int suma = 0;
        for (int col = 0; col < 12; col++) {
            suma += matriz[fila][col];
        }
        cout << "Fila " << fila << ": suma = " << suma << endl;
    }
  }

  struct Registro {
    int numeroEmpleado;
    int mes;
    int dia;
    int horas;
  };

  void registroAsistencias(){
    const int EMP_MIN = 100, EMP_MAX = 129;

    int horasAbril = 0;
    bool diasConAsistencia[13][32] = {false};
    int mesesTrabajados[EMP_MAX+1][13] = {0};

    Registro reg;

    cout << "Ingrese registros (empleado=0 para terminar)" << endl;
    while (true){
        cout << "Numero de empleado (100-129, 0 para salir): ";
        cin >> reg.numeroEmpleado;
        if (reg.numeroEmpleado == 0) break;

        cout << "Mes (1-12): ";
        cin >> reg.mes;
        cout << "Dia (1-31): ";
        cin >> reg.dia;
        cout << "Horas trabajadas: ";
        cin >> reg.horas;

        if (reg.mes == 4) horasAbril += reg.horas;

        diasConAsistencia[reg.mes][reg.dia] = true;

        mesesTrabajados[reg.numeroEmpleado][reg.mes] = 1;
    }

    cout << "Total de horas trabajadas en abril: " << horasAbril << endl;

    cout << "Cantidad de dias con asistencia por mes: " << endl;
    for (int m= 1; m <= 12; m++) {
        int dias = 0;
        for (int d = 1; d <= 31; d++) {
            if (diasConAsistencia[m][d]) dias++;
        }
        cout << "Mes " << m << ": " << dias << "dias" << endl;
    }

    cout << "Meses trabajdos por empleado:" << endl;
    for (int emp = EMP_MIN; emp <= EMP_MAX; emp++) {
        int contadorMeses = 0;
        for (int m = 1; m <= 12; m++) {
            if (mesesTrabajados[emp][m]) contadorMeses++;
        }
        if (contadorMeses > 0) {
            cout << "Empleado " << emp << ": " << contadorMeses << " meses" << endl;
        }
    }
  }
