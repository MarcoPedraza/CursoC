//Aumentar el salario en una empresa el 10%

#include <stdio.h>

int main(){
	
	char nombre[40];
	int salario;
	float aumentoSalario;
	
	printf("Inserte su nombre por favor\n");
	gets(nombre);
	
	printf("Inserte su salario\n");
	scanf("%i",&salario);
	
	aumentoSalario = (salario*.1)+salario;
	printf("Felicidades %s tu salario ahora es de %.2f\n",nombre,aumentoSalario);
	
	return 0;
}
