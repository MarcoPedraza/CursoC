//!Punteros 

#include <stdio.h>


int main(){

    int numero = 50;
    int *pNumero;
    printf("Dato: %i",numero); //Dato
    printf("\nPosicion %p",&numero); //Posicion en memoria

    pNumero = &numero;  //&numero = posicion en memoria de numero
    printf("Valor de la variable\n");
    printf("Dato: %i\n",numero);
    printf("Dato: %i\n",*pNumero);

    printf("Posicion de memoria;\n");
    printf("Posicion:%p",&numero);
    printf("Posicion:%p",pNumero);

    return 0;
}