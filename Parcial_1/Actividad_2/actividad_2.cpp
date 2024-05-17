#include <iostream>

using namespace std;

void dataInput(int &);

int calculoBisiesto(int);

void confirmarBisiesto(int ano);

int main(){

    int ano;

    dataInput(ano);

    confirmarBisiesto(ano);


    cin.get();
    return 0;
}

void dataInput(int &ano){

    cout<<"Ingrese el año: "; cin>>ano;

    cout<<endl<<endl;
}

int calculoBisiesto(int ano){return ano%4;}

void confirmarBisiesto(int ano){

    if(calculoBisiesto(ano) == 0){

        cout<<ano<<" es bisiesto.";
    }else{

        cout<<ano<<" no es bisiesto.";
    }

    cout<<endl<<endl;
}
