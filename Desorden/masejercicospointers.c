#include <stdio.h>


int main(){

        //cuando el apuntador no tiene delante el * LO QUE ESTA HACIENDO ES COPIAR LA DIRECCION DE MEMORIA
    int entero = 10, *apuntadorEntero = &entero;
    float flotante = 2.5, *apuntadorFlotante =&flotante;
    char caracter = 'h', *apuntadorCaracter = &caracter;

   
    printf("Entero (variable): %d\n",entero);
    printf("Apuntador *: %d\n",*apuntadorEntero);
    printf("Apunador entero memoria: %p\n",apuntadorEntero); // sin * es la direccion de la memoria

    return 0;
}

