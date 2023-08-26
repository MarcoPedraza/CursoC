//* Parámetro por referencia
//* En este tipo de funciones el valor de la variable si se modifica, ya que se pasa como
//* parámetro la dirección de memoria de esta, usando el operador & y en la función, el
//* argumento se recibe como el valor que alberga esa dirección de memoria usando el operador
//* *. Si la idea no te queda clara no te preocupes, ya que en el siguiente tema se trabaja más
//* detalladamente con esto de los apuntadores y direcciones de memoria.
//* Por ahora usaremos el mismo problema del ejemplo anterior, pero pasando los parámetros
//* por referencia

#include <stdio.h>
#include <stdlib.h>

void Agregar(int *a){
        *a += 10; //? a = a+10;
}

int main() {

    int numero;
    printf("Escribe el numero\n");
    scanf("%d",&numero);

    printf("\nValor antes de la funcion: %d",numero);
    Agregar(&numero);

    printf("\nValor despues de la funcion: %d",numero);
    system("pause"); // Para poder ejecutarlo desde el exterior de la termila de vscode
    return 0;
}
