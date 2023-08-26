//Dadas las horas trabajadas de una persona y el valorpor hora
// Calucla su salario e imprimelo


#include <stdio.h>


int main(){
	
	int horas,salarioHora,salarioTotal;
	
	printf("Digite las horas trabajadas \n");
	scanf("%i",&horas);
	
	printf("Digite el salario por hora \n");
	scanf("%i",&salarioHora);
	
	salarioTotal = horas*salarioHora;
	
	printf("\nEl salario total es: %i",salarioTotal);
	
	return 0;
}
