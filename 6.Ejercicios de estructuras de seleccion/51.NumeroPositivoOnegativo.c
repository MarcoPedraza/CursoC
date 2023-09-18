/*
Comprobar si el numero digitado es positivo o negativo
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Escribe un numero\n");
    scanf("%i",&numero);

    if(numero>=0){
        printf("El numero ingresado es positivo");
    }
    else{
        printf("El numero ingresado es negativo");
    }



    return 0;
}