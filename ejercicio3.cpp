/*Calcular el factorial de un número ingresado por el usuario utilizando un bucle.*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ int num ;
  int factorial;
    cout<<"Ingrese un numero:  \n";
    cin>>num;
    factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
        cout<<"El factorial de "<< num << " es " << factorial<< endl;
    }
    

    return 0;
}
