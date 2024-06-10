#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int edad;
    int *apuntador = &edad;
    cout << "Ingrese la edad: ";
    cin >> *apuntador;
    
    if(*apuntador > 0){
        cout<<"sos menor de edad. "<<endl;
    }
    
    else if(*apuntador >=18){
        
        cout<<"sos mayor de edad. "<<endl;
    }
    else if(*apuntador < 0){
        cout << "Edad no valida" << endl;
    }
    
    cout <<"Usted ingreso el numero: " <<*apuntador <<"\n";
    cout<<"El espacio de memoria de la variable es: "<< &apuntador <<"\n";
     return 0;
    
    
}

