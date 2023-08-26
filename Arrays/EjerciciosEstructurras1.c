// Ejercicio Estrucuturas de datos

#include <string.h>
#include <stdio.h>

struct Direccion{
    char calle[30];
    short numero;
    char colonia;
    int cp;
};

struct Alumno{
    int numCuenta;
    char nombre[25];
    char apellido[25];
    float promedio;
    struct Direccion direccion;   //llama a la esctuctura de arriba/no puede estar abajo

};



int main(){

    struct Alumno Alumno1; // creamos un nuebo alumno

    strcpy(Alumno1.nombre,"Jorge");
    strcpy(Alumno1.apellido,"Salgado");
    Alumno1.numCuenta = 12345;
    Alumno1.promedio = 8.9;
    
    strcpy(Alumno1.direccion.calle,"Washingi");
    Alumno1.direccion.numero,120;
    strcpy(Alumno1.direccion.colonia,"Abetos");
    Alumno1.direccion.cp = 567345;

    printf("El nombre del alumno es: %s\n",Alumno1.nombre);
    printf("El apellido del alumno es: %s\n",Alumno1.apellido);
    printf("El promedio de cuenta del alumno es: %f\n",Alumno1.promedio);
    printf("La calle del alumno es: %s\n",Alumno1.direccion.calle);
    printf("El número del alumno es: %i\n",Alumno1.direccion.numero);
    printf("La colonia del alumno es: %s\n",Alumno1.direccion.colonia);
    printf("El codigo postal del alumno es: %i\n",Alumno1.direccion.cp);
    
    printf("\n\n");

    //!Crear apuntador para cambiar todos los datos

   // int *hola //Apuntador a entero
    
    
    struct Alumno *apAlumno;
    apAlumno = &Alumno1;
    
    strcpy(apAlumno->direccion.calle,"Tepito");  //SE PONE UNA FLECHA PORQUE YA NO ES CON EL OPERADOR .,
    apAlumno->direccion.cp = 54321;
    strcpy(apAlumno->direccion.colonia,"Juarez");
    apAlumno->direccion.numero = 123;
    strcpy(apAlumno->nombre,"Juan");


    printf("El nombre del alumno es: %s\n",Alumno1.nombre);
    printf("El apellido del alumno es: %s\n",Alumno1.apellido);
    printf("El promedio de cuenta del alumno es: %f\n",Alumno1.promedio);
    printf("La calle del alumno es: %s\n",Alumno1.direccion.calle);
    printf("El número del alumno es: %i\n",Alumno1.direccion.numero);
    printf("La colonia del alumno es: %s\n",Alumno1.direccion.colonia);
    printf("El codigo postal del alumno es: %i\n",Alumno1.direccion.cp);


    return 0;
}