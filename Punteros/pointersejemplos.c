//Ejemplos de apuntadores

#include <stdio.h>

int main(){

    int a = 19;
    int b = 20;
    
    //Declaramos apuntador a la referencia de las variables

    int *apuntadorA = &a;
    int *apuntadorB = &b;

    printf("El valor de a es %i\n",a);
    printf("La ubicacion en memoria de a es: %p\n",a);
    printf("La ubicacion en memoria del apuntador es: %p\n",apuntadorA);
    printf("El valor del apuntador es: %i\n",*apuntadorA);
    printf("%i\n",a);




    //!Le cambiamos el valor al apuntador

    *apuntadorA = 123;
    //? Aqui se notara que cambio el valor de la variable a la que apuntaba
    printf("%i",a);



    return 0;
}