// Dada la norta de un examen, mediante un codigo ecribir el literal que le corresponde a la nota

//A - Excelente
//B - notable
//C - Aprobado
//D y F --> Reprobado



#include <stdio.h>

int main(){

char nombre[20], asignatura[20];
float notaExamen;

printf("Escribe tu nombre");
scanf("%s",&nombre);

printf("De que asignatura es el examen que has hecho?");
scanf("%s",&asignatura);

printf("%s, que nota has sacado en el examen de %s?",nombre,asignatura);
scanf("%f",&notaExamen);

    if (notaExamen<=4.9){
        printf("Reprobaste la materia");
    }
    else if (notaExamen==5)
    {
        printf("Has aprobado por los pelos");
    }

    else if (notaExamen>5 && notaExamen<7){
        printf("Tienes un notable");
    }

    else{
        printf("Tienes un sobresaliente");
    }


    return 0;
}