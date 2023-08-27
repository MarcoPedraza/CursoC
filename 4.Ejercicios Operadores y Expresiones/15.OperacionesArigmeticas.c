#include <stdio.h>

int main (){

    float num1,num2,suma,resta,multiplicacion,division;

    printf("Escribe 2 numeros \n");
    scanf("%f %f",&num1,&num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    printf("La suma de los numeros es %.2f\n La resta es %.2f\n La multiplicacion es %.2f\n La division es %.2f\n",suma,resta,multiplicacion,division);

    return 0;
}