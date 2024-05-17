#include <iostream>
#include <iomanip>

using namespace std;

void dataInput(int &cantidad, string materias, float (&notas)[10], float (&ponderaciones)[10],
               float &ponderacionesTotales);

float promedioPonderado(int cantidad, float notas[10], float ponderaciones[10], float ponderacionesTotales);

int main(){

    int cantidad;
    float notas[10], ponderaciones[10], ponderacionesTotales = 0;
    string materias;  //el nombre de las materias no se utiliza, pero se pide que se ingrese.
                        //En caso de que pidiera usarlos, utilizaría una matriz.

    dataInput(cantidad, materias, notas, ponderaciones, ponderacionesTotales);

    float promedioFinal = promedioPonderado(cantidad, notas, ponderaciones, ponderacionesTotales);

    cout<< "Promedio ponderado: "<<fixed<<setprecision(2)<<promedioFinal;

    cin.get();
    return 0;
}

void dataInput(int &cantidad, string materias, float (&notas)[10], float (&ponderaciones)[10],
               float &ponderacionesTotales){

    cout<<"Ingrese la cantidad de materias: "; cin>>cantidad;
    cout<<endl;

    for(int i = 0; i < cantidad; i++){

        cout<<"Ingrese el nombre de la materia: "; cin>>materias;
        cout<<"Ingrese la nota: "; cin>>notas[i];
        cout<<"Ponderacion: "; cin>>ponderaciones[i];

        ponderacionesTotales+=ponderaciones[i];

        if(ponderacionesTotales > 100){

            cout<<"Error. Ponderaciones superan el 100%. Intente de nuevo.";
            i = -1;
            ponderacionesTotales = 0;
            cout<<endl;
        }

        if(ponderacionesTotales != 100 && i == cantidad -1){

            cout<<"Error. Ponderaciones no llegan al 100%. Intente de nuevo.";
            i = -1;
            ponderacionesTotales = 0;
            cout<<endl;
        }

        cout<<endl;
    }
}

float promedioPonderado(int cantidad, float notas[10], float ponderaciones[10], float ponderacionesTotales){

    float total = 0;

    for(int i = 0; i < cantidad; i++){

        total+=notas[i]*ponderaciones[i];
        ponderacionesTotales+=ponderaciones[i];
    }

    return total/ponderacionesTotales;
}
