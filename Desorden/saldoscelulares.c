/*Calcular las tarifas de saldo en celulares
y poner precios 
de 1000 a 1500 Premium
de 500 a 999 intermedia
de 100 a 499 basica*/

#include <stdio.h>

#define Tarifa3 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa1 "Basica"

int main(){

float precio;

printf("Digite el dinero que esta dispuesto a pagar por su plan\n");
scanf("%f",&precio);

if(precio<500 && precio>99){
    printf("la tarifa apta es %s",Tarifa1);
}

if(precio>=500 && precio<1000){
    printf("la tarifa apta es %s",Tarifa2);
}

if (precio>=1000 && precio <=1500){
    printf("la tarifa apta es %s",Tarifa3);
}


   return 0; 
}
