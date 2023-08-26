// Escribe un programa para trabajar sobre un arreglo de 10 elementos 
// en el cual se solicite al usuario los valores del array y posteriormente
//se puedan hacer las siguinetes operaciones:

/*

1) ingresar o modificar elementos del array 
2) mostrar la suma de los elementos
3) realizar la multiplicacion de los elementos
4) realizar la suma solo de los elementos divisbles netre 3
5) multiplicar por 3 cada elemento del arreglo

El usuaro seleccionará la opcion de su preferencia y el programa mostrara los datos del arreglo 
original y el resulatado de la opcuion seleccionada
el programa debe realizarse en un menu que debe ejecutarse continuamente hasta que el usuario
decida salir
*/

#include <stdio.h>

void DatosArreglo(int arreglo1[]);  // Prototipo de la funcion (declararla)
void LlenarArreglo(int arreglo1[]);
void SumaElementos(int arreglo1[]);
void MultiplicaElementos(int arreglo1[]);
void SumaElementosTres(int arreglo1[]);
void MultiplicaTres(int arreglo1[]);



int main(){

    int arreglo1[10];
    int bucle;
    int opcion;




    printf("Este programa ejecuta operaciones sobre un arreglo de 10 elementos\n ");


    for (int i = 0; i < 10; i++){   // O i <= 9
         
         printf("Escribe el elemento [%i] del arreglo\n",i);
         scanf("%i",&arreglo1[i]);
    }


    while (bucle){    // No hace falta poner el = 1

        printf("Selecciona la opcion que quieres \n\n");
        printf("1) Ingresar o modificar elementos del arreglo\n2) Mostrar la suma de los elementos\n");
        printf("3) Realizar la multiplicacion de los elementos\n4) Realizar la suma solo de los elementos divisible entre 3\n");
        printf("5) Multiplicar por 3 cada elemento del arreglo\n0) Salir\n");

        scanf("%i",&opcion);

        switch (opcion){

            case 1:

            printf("1) Ingresar o modificar elementos del arreglo\n");
            DatosArreglo(arreglo1);
            LlenarArreglo(arreglo1);
            DatosArreglo(arreglo1);  // Aqui sale datos arreglo ya modificado

                break;

            case 2: 

            printf("2) Mostrar la Suma de los elementos\n");
            DatosArreglo(arreglo1);
            SumaElementos(arreglo1);

                break;

            case 3:

            printf("3) Realizar la multiplicacion de los elementos\n");
            DatosArreglo(arreglo1);
            MultiplicaElementos(arreglo1);


                break;

            case 4:

            printf("4) Realizar la suma solo de los elementos divisibles entre 3\n");
            DatosArreglo(arreglo1);
            SumaElementosTres(arreglo1);


                break;

             case 5:

             printf("5)Multiplicar por 3 cada elemento del arreglo\n");
             DatosArreglo(arreglo1);
             MultiplicaTres(arreglo1);


                break;

             case 0:

                bucle = 0;
                break;

             default:

             printf("Opcion no valida\n");
             break;                      
        }
    }





    return 0;
}


void DatosArreglo(int arreglo1[]){   // Va a recibir datos, por eso es void

    for (int i = 0; i < 10; i++){
        printf("Posicion [%i] = %i\n",i,arreglo1[i]);
    }

}


void LlenarArreglo(int arreglo1[]){  // Esta funcion es para modificar el arreglo 



    for (int i = 0; i < 10; i++){
        printf("Escribe el numero del arrelgo en la posicion [%i]\n",i);
        scanf("%d",&arreglo1[i]);
    }
    
}




void SumaElementos(int arreglo1[]){

    int sumatoria = 0;

    for (int i = 0; i < 10; i++){

        sumatoria += arreglo1[i];              // Sumatoria = sumatoria + 
    }

    printf("La suma de todos los elementos del arreglo es de  %i\n",sumatoria);
}

void MultiplicaElementos(int arreglo1[]){

int multiplicatorio = 1;

    for (int i = 0; i < 10; i++){

        multiplicatorio *= arreglo1[i];
    }

    printf("La multiplicacion de todos los elementos del array, da como resultado: %i\n",multiplicatorio);


}

void SumaElementosTres(int arreglo1[]){

    int sumatoria = 0;

    for (int i = 0; i < 10; i++){

        if (arreglo1[i]%3 == 0){
            sumatoria+=arreglo1[i];
        }

    }

    printf("La suma de los elementos divisibles entre 3 es %i\n",sumatoria);
}

void MultiplicaTres(int arreglo1[]){
    for (int i = 0; i < 10; i++){

        arreglo1[i]= arreglo1[i]*3;


    }

    for(int i = 0; i < 10; i++){

        printf("El arreglo multiplicado por 3 en la posicion [%i] es: %i\n",i,arreglo1[i]);


    }
    
}