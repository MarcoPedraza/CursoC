#include <stdio.h>

int main(){


    float num1,num2;

    printf("Digita dos numeros\n");
    scanf("%f %f",&num1,&num2);

    if(num1<num2){
        printf("%.1f es mayor que %.1f",num2,num1);
    }

    else{

        printf("%.1f es mayor que %.1f ",num1,num2);
    }


    return 0;
}