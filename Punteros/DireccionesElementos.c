/* Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4},
escribir un programa en C (haciendo uso de puntero) que muestre las
direcciones de memoria de cada elemento del vector.*/

#include <stdio.h>

int main(){

    int vector[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
    int *punteroAVector = vector; // no se pone el & porque es un vector/array (en los demas casos si que se pone)

    for (int i = 0; i < 10; ++i) {

        printf("Dato vector[%d] = %d\n", i, vector[i]);
        printf("Direccion de memoria de vector[%d] = %p\n", i, &vector[i]);
        printf("Direccion de memoria de vector[%d] = %p\n", i, punteroAVector);
        //printf("punteroAVector: %p %d\n", punteroAVector,punteroAVector);     // Lo correcto para ver la direccion de memoria de cada uno de los elementos del array, igual que el &vector[i];
        //printf("&punteroAVector: %p %d\n", &punteroAVector,&punteroAVector);  // Muestra la direccion de memoria del propio apuntador, que es como una variable mas, y no varia (siempre es la misma)  
       // printf("*punteroAVector: %p %d\n", *punteroAVector,*punteroAVector);  // Muestra el valor de a lo que apunta
       // printf("\n\n");

        punteroAVector++;
        
    }


    return 0;
}
















