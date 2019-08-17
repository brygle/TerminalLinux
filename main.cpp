#include <iostream>
#include <stdio.h>
#include <string.h>
#define getch() _getch()
using namespace std;

int main(){

    int bandera = 0;
    cout<<"\t\tBryan Gustavo Lopez Echeverria - 201503723 \n"<<endl;
    do{
        char comando[100] ;
        fflush(stdin);
        cout<<"Ingresar comando o presione 1 para salir: \n";
        cout<<"--> " ; 
        fflush(stdin);
        cin.getline(comando, 100,'\n');
        fflush(stdin);
        if(strcmp(comando, "1")==0){
            bandera = 1;
        }
        
    }while(bandera==0);

    return 0;
}
