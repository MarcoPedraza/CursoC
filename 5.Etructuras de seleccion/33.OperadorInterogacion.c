/*

Condicion ? Expresion1:    Expresion 2


*/







#include <stdio.h>


int main(){


  int numero;
  printf("Escribe un numero: ");
  scanf("%i",&numero);
  
  printf("%i",numero);
  

  if(numero%2==0){  // 

    printf("El numero es par");
  }

  else{
    printf("El numero es impar");
  }

    // lo primero es la condicion, despues la expresion y despues el else


    return 0;
}


//(numero%2==0) ? printf("El numero es par\n"): printf("Es impar\n");