

/*Rellenar un array de 10 numeros, posterioirmente utilizando 
punteros indicar cuales son numeros pares y su posicion en memoria*/

#include <stdio.h>

int main(){

    int numeros[10], *apuntadorNumero = numeros;   // con arreglos no se pone el ampersant
    
    
    for (int i = 0; i < 10; i++){

        printf("Introduce el numero en la posicion numero [%d]: ",i);
        scanf("%d",&numeros[i]);
    }


    for (int i = 0; i < 10; i++){

        if(*apuntadorNumero % 2 == 0){
            printf("El numero %d es par ",*apuntadorNumero);
            printf("y su posicion en memoria es %p\n",apuntadorNumero);
            printf("\n");
        }
        apuntadorNumero++;
    }
    

    








    return 0;
}