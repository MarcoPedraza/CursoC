//Ejercicios de funciones sumar restar y eso

#include <stdio.h>

void menu();
void sumar();
void restar();
void multiplicar();
void dividir();



int main(){
	menu();
	return 0;
}

void menu(){

    int opcion;
    do
    {
        printf("1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n");
        printf("Opcion\n");
        scanf("%i",&opcion);

        switch (opcion)
        {
        case 1: Sumar();
        break;
        case 2: Restar();
        break;
        case 3: Multiplicar();
        break;
        case 4: Dividir();
        break;
        
        default: 
            break;
        }
    } while (opcion!=5);
}

void sumar(){
	int n1,n2,suma=0;
	printf("Escribe dos numeros para sumar\n");
	scanf("%i %i",&n1,&n2);
	suma = n1 + n2;
	printf("La suma es %i\n Que mas quieres hacer?\n",suma);
}

void restar(){
	int n1,n2,resta;
	printf("Escribe dos numeros para restar\n");
	scanf("%i %i",&n1,&n2);
	resta = n1-n2;
	printf("La resta de los dos numeros es igual a %i\n Que mas quieres hacer?\n",resta);
}
