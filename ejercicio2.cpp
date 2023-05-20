/* Solicitar al usuario que ingrese un número y determinar si es positivo o negativo.*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int num;
    cout<<"Ingresa un numero:  \n";
    cin>>num;
    if (num > 0)
    {
        cout<<"Es un numero positivo";
    }else if (num < 0);
    {
        cout<<"Es un numero negativo";
    }
    
    
    return 0;
}
