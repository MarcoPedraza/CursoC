/*

Ver si un alumno va a pasar de año o no
Un alumno solo tiene derecho a reprobar 3 materias para poder pasar de añp
Si reprueba 4 materias no puede pasar de año y recursa
*/



#include <stdio.h>


int main(){

    char nombre[50];
    int numeroSuspensas;

    printf("Escribe tu nombre: ");
    scanf("%s",&nombre);

    printf("%s, cuantas asignaturas has suspendido?", nombre);
    scanf("%i",&numeroSuspensas);

    if (numeroSuspensas>=4){

        printf("Lo siento %s, tenes que recursar",nombre);
    }

    else{

        printf("Enhorabuena %s, has pasado de curso!",nombre);
    }

    return 0;
}