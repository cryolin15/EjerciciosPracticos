/*Solicitar al usuario que ingrese una cadena y contar cuántas vocales contiene.*/
#include <iostream>

using namespace std;

int main(){
    cout<<"Ingrese una Frase: "<<endl;
    int vocal1 =0 ,vocal2 =0, vocal3 = 0 , vocal4 = 0 , vocal5 =0 ;
    char frase[50];
    gets(frase);
    for (int i = 0; i <=50; i++)
    {
        switch (frase[i])
        {
        case 'a': case 'A': vocal1++; break;
        case 'e': case 'E': vocal2++; break;
        case 'i': case 'I': vocal3++; break;
        case 'o': case 'O': vocal4++; break;
        case 'u': case 'U': vocal5++; break;
        default:
        break;
        }
    }vocal3;
    cout<<"La letra a se encuentra en: "<<vocal1<<endl;
    cout<<"La letra e se encuentra en: "<<vocal2<<endl;
    cout<<"La letra i se encuentra en: "<<vocal3<<endl;
    cout<<"La letra o se encuentra en: "<<vocal4<<endl;
    cout<<"La letra u se encuentra en: "<<vocal5<<endl;
    

    return 0;
}
