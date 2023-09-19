//Determinar suma de todos los nuemros hasta el numeero que de el usuario


#include <stdio.h>


int main(){

    int cont,num,suma = 0;

    printf("Escribe hasta que numero quieres que se haga la suma: \n");
    scanf("%i",num);

    cont = 1;

    while (cont<=num){
        
        suma+=cont;
        cont++;
    }

    return 0;
}



// 4

//1 es menor o iguak que 4 por lo tanto, suma(0) = 0+1  ; 1 ++;   suma = 0 +2; cont ++;