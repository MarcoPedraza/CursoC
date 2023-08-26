/* Hcaer una lista de 10 numeros, luego pedirle al usuario que digite un numero,
con una busqueda secuencial detyerminar si el numero existe en la lisra o no
e indicar en que posicion se encuentfga*/


#include <stdio.h>


int main(){

    int a[10]={2,4,6,8,0,1,3,5,7,9};
    int i,dato;
    char band = 'F';

    printf("Escribe un numero\n");
    scanf("%i",&dato);

    //!Busqueda Secuencial
    

    i=0;
    while((band == 'F')&&(i < 10)){

        if (a[i]==dato){
            band = 'V';
        }

        i++;

    }

    if (band == 'F'){
        printf("El numero no existe en la lista\n");
    } else if (band == 'V'){
        printf("El numero existe, en la posicion %i",i); //! Normalmente se podnria i+1 porque los arrays comienzan en 0, pero arriba, cuadno se acaba la condiccion ehile,m siempre se le suma i++, y el valor de i aumenta
    }




    return 0;
}