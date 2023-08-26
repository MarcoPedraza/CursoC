// Ver si un alumno va a pasar de año o no
// Un alumno solo tiene derecho a reprobar 3 materias para poder pasar de año
// Si reprueba 4 materias no puede pasar de año y recursa

#include <stdio.h>

int main(){

  int materiasReprobadas;

  printf("Cuantas materias has reprobado?\n");
  scanf("%i",&materiasReprobadas);

  if(materiasReprobadas>3){
    printf("Lo sineto, repites curso\n");
  } else{
    printf("Felicidades, has pasado de curso pero tienes que recuperar %i asignatura\n",materiasReprobadas);
  }


    return 0;
}