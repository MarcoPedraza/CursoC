//Escribe un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos
//unicamente 0´s y 1´s. Una vez que el usuario llene el arrelgo con el numero binario,
//podra seleccionar entre alguna codificacion

//a) binario puro
//b)Punto fijo (6bit entero y 4 bit decimal)
//c)completo a 2

//El programa realizará la conversion y como salida mostrará 
//el resultado en representacion decimal

#include <stdio.h>

int main(){

    int arreglo1[10];

    printf("Este programa hace concversiones de binario a tres diferentes tipos de codificacion\n");
    printf("Primero llene el arreglo de 10 elementos\n\tSOLO USA CERO Y UNO\n");

    for (int i = 0; i < 10; i ++){
        printf("Escribe el elemento [%i] del arreglo \n",i);
        scanf("%i",&arreglo1[i]);
    }
    printf("El arreglo queda de esta manera\n");
    for (int i = 0; i < 10; i++){
        printf("[%i]\n",arreglo1[i]);
    }


    return 0;
}