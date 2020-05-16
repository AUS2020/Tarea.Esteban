#include <stdio.h>
#define MAX 5
#define RANGO 0
#define RANGO1 100

int main ()
{
    float A[MAX];
    float P[MAX];
    float nro;
    int i=0;
    printf("Ingrese %d numeros por teclado. Los introduciremos dentro de un array.\n",MAX);
    printf("Tenga en cuenta que si ingresa numeros con mas de 2 decimales, no los consideraremos.\n");
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%f",&A[i]);
    }
    printf("\nEl array queda como sigue:\n");
    for(i=0;i<MAX;i++){
        printf("%.2f ",A[i]);
    }
    printf("\n\nAhora ingrese un numero cualquiera entre %d y %d, pero que no sea cero.\n",RANGO,RANGO1);
    scanf("%f",&nro);
    while(nro<=0 || nro>100){
        printf("Numero incorrecto. Ingrese nuevamente.\n");
        scanf("%f",&nro);
    }
    for(i=0;i<MAX;i++){
        P[i]=A[i]*nro;
    }
    printf("\nLLenamos un nuevo array P, multiplicando los valores del array A con el ultimo nro que ingreso.\n");
    printf("El nuevo array queda como sigue:\n");
    for(i=0;i<MAX;i++){
        printf("%.2f ",P[i]);
    }
    return 0;
}
