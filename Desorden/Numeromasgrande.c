//Menor de dos numeros

#include <stdio.h>

int main(){
	
	float num1,num2;
	
	printf("Digita 2 numeros\n");
	scanf("%f %f",&num1,&num2);
	
	if(num1 > num2){
		printf("El numero %.2f es mas grande que el segundo",num1);
		
	} else if(num1==num2){
		printf("Los dos numeros son iguales");
		
	} else{
		printf("El numero %.2f es mas grande que el 1",num2);
	}
	
	
	
	return 0;
}
