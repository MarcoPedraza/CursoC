//Sentencia switch

#include <stdio.h>

int main(){

    int dia;

    puts("Selecciona un numero de los dias de la semana(1 al 7)\n");
    scanf("i",&dia);

    switch (dia)
    {
    case 1: printf("Seleccionaste el Lunes\n");
        break;
        
    case 2: printf("Seleccionaste el Martes\n");
        break;

    case 3: printf("Seleccionaste el Miercoles\n");
        break;

    case 4: printf("Seleccionaste el Jueves\n");
        break;

    case 5: printf("Seleccionaste el Viernes\n");
        break;

    case 6: printf("Seleccionaste el Sábado\n");
        break;

    case 7: printf("Seleccionaste el Domingo\n");
        break;                        
    
    default:  puts("Esa opcion no es valida");
        break;
    }


    return 0;
}