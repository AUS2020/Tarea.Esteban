#include <stdio.h>
#define MAX 10
#define MAXNUM 10

int main ()
{
    int arreglo[MAX];
    int i;
    printf("Ingrese %d numeros enteros comprendidos entre -%d y %d.\n",MAX,MAXNUM,MAXNUM);

    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%d",&arreglo[i]);
        while(arreglo[i]<-MAXNUM || arreglo[i]>MAXNUM){
            printf("Numero incorrecto, ingrese nuevamente.\n");
            printf("Ingreso nro %d: ",i+1);
            scanf("%d",&arreglo[i]);
        }
    }
    printf("Los numeros que ingresaste son:\n");
    for(i=0;i<MAX;i++){
        printf(" ->  %d\n",arreglo[i]);
    }
    return 0;
}
