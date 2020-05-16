#include <stdio.h>
#define MAX 3

int main ()
{
    int m[MAX], n[MAX];
    int i, j, contador=0, suma=0, suma2=0;
    printf("Ingrese %d numeros enteros entre 0 y 50 para el array M.\n",MAX);
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%d",&m[i]);
        while(m[i]<0 || m[i]>50){
            printf("Numero incorrecto. Ingrese nuevamente.\n");
            printf("Ingreso nro %d: ",i+1);
            scanf("%d",&m[i]);
        }
        suma+=m[i];
    }
    printf("\nHaga un ingreso similar para el array N.\n");
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%d",&n[i]);
        while(n[i]<0 || n[i]>50){
            printf("Numero incorrecto. Ingrese nuevamente.\n");
            printf("Ingreso nro %d: ",i+1);
            scanf("%d",&n[i]);
        }
        suma2+=n[i];
    }
    printf("\nLos arrays ingresados fueron:");
    printf("\nArray M:\n");
    for(i=0;i<MAX;i++){
        printf("--> %d\n",m[i]);
    }
    printf("\nArray N:\n");
    for(i=0;i<MAX;i++){
        printf("--> %d\n",n[i]);
    }
    printf("\nAhora los compararemos para saber si son iguales o si la suma de ambos coincide.\n");
    for(i=0;i<MAX;i++){
        if(m[i]==n[i]){
        contador+=1;
        }
    }
    if(contador==MAX){
        printf("--> Los arreglos son iguales.\n");
    }
    else if(suma==suma2){
        printf("--> Los arreglos no son iguales, pero son similares frente a suma.\n");
    }
    else{
        printf("--> Los arreglos son diferentes.\n");
    }
    return 0;
}
