// Calcular tarifas de saldo en celulares y poner precios
//solo con if anidados

#define Tarifa1 "Premium"   // de 1000 a 1500
#define Tarifa2 "Intermedia" // de 500 a 999
#define Tarifa3 "Básica"  // de 100 a 499

#include <stdio.h>

int main(){

    float dinero;

    printf("Cuanto monto tienes disponible?:\n");
    scanf("%f",&dinero);

    if(dinero<500 && dinero > 99){
        printf("La tarifa para ti es la Básica");
    }

    if(dinero>=500 && dinero <=999){
        printf("La tarifa para ti es la Intermedia");
        
    }

    if(dinero>=1000 && dinero <=1500){
        printf("La tarifa para ti es la Premium");
        
    }


    return 0;
}