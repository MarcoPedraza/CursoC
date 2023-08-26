 /*Array multidimensional
 Primero hacia abajo y despues hacia la derecha

Renglones derecha
 Columnas abajo

Arreglos de mas de dos dimensiones

int hola [2][3][4]  los dos ultimos son renglones * columnas, pero el primero es todo eso multiplicado por el numero que etse dentro

es igual que un array pero se pone otra tabla abajo, y los indices


Arreglo de 5 dimensiones:


*/


#include <stdio.h>

/*int main(){

	int hola[2][3] = {{1,2,3},{4,5,6}}; // Aqu� rellenamos todos los espacios del array

	printf("hola[1][2] es igual a %i\n",hola[1][2]);

	return 0;
}

*/

// Rellenar array con bucle for (sin tener que hacerlo manualmente como lo hicimos arriba)


// Dos bucles for anidados :
// Primero entra en el primer bucle for que son los renglones, y por cada renglon, utiliza tres columnas y se llenan todas las columnas de ese renglon, y depsues va al siguinete renglon
// Y aparte tengo que quitar el salto de linea que habia dentro del bucle j
int main(){

	int hola[2][3] = {1,2,3,4,5,6};

	for (int i = 0; i < 2; i++){

        for (int j = 0; j < 3; j++){
            printf("%i",hola[i][j]);
        }

		printf("\n");
	}

	return 0;

}


// Para que se vean los dos renglones y las tres columnas en la terminal, 
//tengo que poner el salto de linea en el bucle i despues del j, cuando haga el j tres veces, sigue leyendo abajo, (que estara el salto de linea, y despues vuelve al bucle for de los renglones)





