#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	
	printf("Programa que borra la pantalla al pulsar el numero 1\n");
	printf("Escribe el numero 1:");
	scanf("%i",&numero);
	
	if(numero==1){
		system("cls");
		printf("Ha borrado la pantalla");
	} else{
		printf("El numero ingresado no es 1");
	}
	
	
	return 0;
}
