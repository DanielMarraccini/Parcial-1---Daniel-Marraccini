#include <iostream>
#include <iomanip>

using namespace std;

void inputData(float &, float &);

float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float resto(float, float);
float division(float, float);

void operaciones(float, float);


int main(){

    float n1, n2;

    inputData(n1, n2);

    operaciones(n1, n2);

    cin.get();
    return 0;
}

void inputData(float &n1, float &n2){

    cout<<"Ingrese un numeros: "; cin>>n1;

    do{

        cout<<"\nIngrese otro numero: "; cin>>n2;

    if(n2 == 0){

        cout<<"\n\nLa division no es posible por 0. Ingrese otro valor para el segundo numero.\n\n";
    }

    } while (n2 == 0);

    cout<<endl<<endl;
}

float suma(float n1, float n2){return n1 + n2;}
float resta(float n1, float n2) {return n1 - n2;}
float multiplicacion(float n1, float n2){return n1*n2;}
float division(float n1, float n2) {return n1/n2;}

void operaciones(float n1, float n2){

    cout<<n1<<" + "<<n2<<" = "<<fixed<<setprecision(2)<<suma(n1, n2); cout<<endl;
    cout<<n1<<" - "<<n2<<" = "<<fixed<<setprecision(2)<<resta(n1, n2); cout<<endl;
    cout<<n1<<" * "<<n2<<" = "<<fixed<<setprecision(2)<<multiplicacion(n1, n2); cout<<endl;
    cout<<n1<<" / "<<n2<<" = "<<fixed<<setprecision(2)<<division(n1, n2); cout<<endl;

    cout<<endl;
}
