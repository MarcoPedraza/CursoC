
Array Unidimensional
Es una secuencia de datos 

Array o Arreglos Unidimensionales

Arrays Enteros
Arrays Flotantes
Arrays de Caracter
Arrays de String (Conjunto de Caracteres)

Empiezan en el cero NUNCA EN UNO 



#include <stdio.h>

int main() {

    int a[5] = {1,2,3,4,5};

    printf("%i, ",a[4]); 

    //Imprime lo que este en la posicion cero 

    return 0;
}

#include <stdio.h>

int main() {

    int a[5] = {1,2,3,4,5};

    for (int i = 0; i < 5 ; i++)
    {
        printf("%i",a[i]);
    }
    

    return 0;
}


#include <stdio.h>

int main() {

    float a[5];
    int i;

    for (i = 0; i < 5 ; i++)
    {
        printf("\n%i) Digite un numero: ",i+1);
        scanf("%f",&a[i]);
    }

    printf("\n\n");
    
    for (i = 0; i < 5 ; i++)
    {
        printf("%.2f\n",a[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {

    int i;
    char a[5] = {'j','o','r','g','e'};

    for ( i = 0; i < 5; i++)
    {
        printf("%c\n",a[i]);
    }
    

    return 0;
}
#include <stdio.h>

int main() {

    char a[20] = "Jorge Profe";

    printf("%s",a);
    
    return 0;
}

#include <stdio.h>

int main() {

    char a[20];

    printf("Escribe tu nombre\n");
    gets(a);

    printf("Tu nombre es: %s",a);

    return 0;
}
