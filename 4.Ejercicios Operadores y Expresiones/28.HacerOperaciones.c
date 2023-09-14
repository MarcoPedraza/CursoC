// Pedir 2 numeros al usuario y sumarlos multiplicarlos restarlos y divisirlos;

#include <stdio.h>

int main(){


    float num1, num2, multiplicacion, division, resta, suma;

    printf("Introduzca dos numeros para hacer los calculos:\n");
    scanf("%f %f",&num1, &num2);

    multiplicacion = num1*num2;
    division = num1/num2;
    resta = num1-num2;
    suma = num1 + num2;

    printf("La multiplicacion da: %.2f\n",multiplicacion);
    printf("La division da: %.2f\n",division);
    printf("La resta da: %.2f\n",resta);
    printf("La suma da: %.2f\n",suma);



    return 0;
}