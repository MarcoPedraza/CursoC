/*
areas de figuras trigonometricas
*/

#include <stdio.h>
int main(){
	
/*	float base,altura,area;
	
	printf("Este programa calcula el area de un triangulo\nInserta la base y la altura\n");
	scanf("%f %f",&base,&altura);
	
	area = (base*altura)/2;
	printf("El area del triangulo es %.2f",area);
	
	*/
	
//Cuadrado

	float lado,area;
	
	printf("Este programa calcula el area de un cuadrado\nInserta el valor del lado\n");
	scanf("%f",&lado);
	
	area = (lado * lado);  //pow eleva el lado a 2  area = pow(lado,2)
	printf("El area del cuadrado es de %.2f",area);
	
	return 0;
}

