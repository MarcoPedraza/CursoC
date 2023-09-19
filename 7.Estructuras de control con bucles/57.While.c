
/*
while(algo{
    instrucciones

})*/


#include <stdio.h>

int main(){

    int i = 0;

    while (i<=100){
        printf("El valor es %i\n",i);
        i++;  // Para que no se genere un bucle infinito
    }  
    

    return 0;
}