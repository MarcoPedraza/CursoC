
//* TipoDeDato NombreDelArray[tamaño] = {Valor1, Valor2, Valor3, ..., ValorN};

#include <stdio.h>

int main() {

   int array[3] = {24,5,50};
   
   printf("\nEl primer valor es %i",array[0]);
   printf("\nEl segundo valor es %i",array[1]);
   printf("\nEl tercer valor es %i",array[2]);
   
   array[0] = 54;
   printf("\nEl valor del nuevo indice 0 es %i",array[0]);
}
