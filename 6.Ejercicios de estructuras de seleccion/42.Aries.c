/* Ingresar por teclado el nombre y el signo de cualquier
persona e imprima,
el nombre solo si la persona es signo Aries,
caso contrario imprima no es signo Aries*/

#include <stdio.h>
#include <string.h>

int main(){
    char nombre[20],signo[20];
    printf("Escribe tu nombre\n");
    fgets(nombre,20,stdin);              //Tambien se puede poner con gets(nombre)
    strtok(nombre,"\n");                 //Cuando usamos fgets para que no se guarde el salto de linea
                                         //tenemos que poner strtok

    printf("Escribe tu signo\n");
    fgets(signo,20,stdin);
    strtok(signo,"\n");

    if(strcmp(signo,"aries")==0){                           //strcmp es comparar dos strings 
        printf("\nSu nombre es: %s",nombre);
    }else if(strcmp(signo,"Aries")==0) {
        printf("\nSu nombre es: %s",nombre);
    }else{
            printf("\nSu signo no es Aries\n");
    }
    printf("\n%s signo",signo);
    printf("\n%s nombre",nombre);
    return 0;
}
