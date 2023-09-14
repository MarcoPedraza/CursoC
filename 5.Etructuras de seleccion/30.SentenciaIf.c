// Condicionales

/*Sentencia IF

if(algo){
    accion
}
*/

#include <stdio.h>

int main(){

float a,b,c;


printf("Digite el numero a y b:");
scanf("%f %f",&a,&b);

c = a+b;  // Esto hay que ponerlo aqui debajo porque el programa si lo pones arriba todavia no sabe cuanto es a y b 



if(a+b>=200){

    printf("\nEl resultado es mayor a 200 y es: %f",c);
}

if (a+b<200){
    printf("\nEl resultado es menor que 200 y es: %f",c);
}

if(a+b==200){

    printf("El resultado es: %f",c);
}

    return 0;
}