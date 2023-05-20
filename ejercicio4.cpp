/*Escribir un programa que determine si un número ingresado por el usuario es primo.*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{int num;
    cout<<"Ingrese un numero: \n";
    cin>>num;
       if (num <=1)
       {
        cout<<"Es un numero primo" << endl;
       }
       for (int i = 2; i <= num/ 2; i++)
       {
        if (num % i == 0)
        {
            cout<< num  <<  "No es un numero primo"<< endl;
        }
        
       }
       
    return 0;
}
