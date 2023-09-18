//Simular una tienda con entradas y salidas del capital


#include <stdio.h>

int main(){


int opcion;
float agregar, retirar, saldo =3000;

 printf("\t*****************************************\n");
 printf("\t*Este es un simulador de tienda o cajero*\n");
 printf("\t*****************************************\n");

 printf("\tSelecciona una Opcion\n\n");
 printf("\n1) Depositar dinero");
 printf("\n2) Retirar dinero");
 printf("\n3) Salir del cajero");
 printf("\nOpcion seleccionada");
 scanf("%i",&opcion);

    switch (opcion)
    {
    case 1:
        printf("Cuanto dinero quiere depositar?\n");
        scanf("%f",&agregar);
        saldo += agregar;                            // saldo = saldo + agreagr
        printf("Su saldo actual es de %.f",saldo);
        break;

    case 2:

        printf("Cuanto dinero quiere retirar?");
        scanf("%f",&retirar);

        

        if (retirar>saldo){

            printf("Tu saldo disponible solo es de %.f",saldo);
        }

        else{
            saldo -= retirar;
            printf("Tu saldo total es de %.f",saldo);
        }
            break;

    case 3: 

        printf("Gracias por usar la aplicacion\nHasta la proxima");

    default:
        break;
    }

    return 0;
}