#include <stdio.h>


int main(){

 char caracter;
 char *apuntadorCaracter;
 apuntadorCaracter = &caracter;

        for(caracter = 'A'; caracter <= 'Z';caracter++){
            printf("%c\n",*apuntadorCaracter);
            apuntadorCaracter++;
        }







    return 0;
}