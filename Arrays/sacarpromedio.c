#include <stdio.h>



int main(){

    int array[8];

    int total = 0;

    for (int i = 0; i < 8; i++){

        printf("\nDato %d",(i+1));
        scanf("%i",&array[i]);
        total += array[i];  //! es igual a poner -> total = total + array[i];
    }

    //Ahora hacemos el calculo

    float promedio = total/8;









    return 0;
}