#include <stdio.h>
#include <stdlib.h>     /** ME PERMITE USAR LAS FUNCIONES rand() Y srand()*/
#include <time.h>       /** ME PERMITE USAR LA FUNCION time() */
#define MAX 10

int main ()
{
    int i, aux, aleatorio, nro;
    int A[MAX], B[MAX];
    srand(time(NULL));

    printf("Array A, con numeros generados entre -100 y 100:\n\n");
    printf("[");
    for(i=0;i<MAX;i++){
        aleatorio=(rand()%201)-100;
        A[i]=aleatorio;
        printf(" %d ",A[i]);
    }
    printf("]");
    printf("\n\nIngrese un numero entre -%d y %d: ",MAX-1,MAX-1);
    scanf("%d",&nro);
    while(nro<-9 || nro>9){
        printf("Ingrese nuevamente de acuerdo al rango: ");
        scanf("%d",&nro);
    }
    printf("\nEl nuevo posicionamiento de los elementos del array queda como sigue:\n");
    if(nro<0){
        nro=(-nro);
        for(int j=1;j<=nro;j++){
            for(i=0;i<MAX-1;i++){
                aux=A[i+1];
                A[i+1]=A[i];
                A[i]=aux;
            }
        }
    }
    else if(nro>0){
        for(int j=1;j<=nro;j++){
            for(i=MAX-1;i>0;i--){
                aux=A[i-1];
                A[i-1]=A[i];
                A[i]=aux;
            }
        }
    }
    printf("[");
        for(int i=0;i<MAX;i++){
            printf(" %d ",A[i]);
        }
        printf("]\n");
    return 0;
}
