#include <iostream>

using namespace std;

void dataInput(int &);

int factorial(int);

void dataOutput(int n);

int main(){

    int n;

    dataInput(n);
    dataOutput(n);

    cin.get();
    return 0;
}

void dataInput(int &n){

    do{
        cout<<"Ingrese un numero a factoriar: "; cin>>n;

        if(n<0){

            cout<<"\n\nError: Número ingresado menor a 0. Intente de nuevo\n\n";
        }

    }while(n<0);

    cout<<endl<<endl;
}

int factorial(int n){

    if(n == 1){

        return n;
    } else{

        return n * factorial(n-1);
    }
}

void dataOutput(int n){

    cout<<"Factorial de "<< n <<": "<<factorial(n);
}
