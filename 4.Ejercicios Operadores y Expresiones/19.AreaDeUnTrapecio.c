#include <stdio.h>
//Escribe un programa que calcule el area de un trapecio

int main (){

float base_Mayor,base_Menor,altura,area;

printf("Escribe la base mayor ");
scanf("%f",&base_Mayor);

printf("Escribe la base menor ");
scanf("%f",&base_Menor);

printf("Escribe la altura ");
scanf("%f",&altura);

area = ((base_Mayor+base_Menor)*altura)/2;

printf("El area es: %.2f",area); // Para metere un dato en una variable hay que poner & / pero para sacarlo no 



    return 0;
}