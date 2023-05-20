#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
int opcion = 0 , Max = 10; 

   cout<<"¿Quieres que te muestre los numeros del 1 al 10?\n";
   cout<<"seleccione 1 si lo desea , en caso de no desearlo seleccione 2\n";
   cout<<"Escriba su eleccion: ";
   cin>>opcion;
     
     if (opcion == 1) 
     {
        for (int i = 1; i <= 10; i++)
        {
           cout<< i<< endl;
        }
        
     }
     else{
     cout<<"Hasta la proxima..... ";
     }
     return 0;
}





