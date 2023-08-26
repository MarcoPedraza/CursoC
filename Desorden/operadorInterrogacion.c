// Expresion condicional del operador interrogacion


//Sintaxis:    Condicion ? Expresion1 :  Expresion2

#include <stdio.h>

int main(){
	
		int numero;

	printf("Escribe un numero\n");
	scanf("%i",&numero);
	
	if(numero%2==0){
		printf("El numero %i es par",numero);
	} else{
		printf("Es impar");
	}
	
	
	
	return 0;
}
