#include <stdio.h>
#define MAX 5

int main ()
{
    int arreglo[MAX];
    int pospar=0, posimpar=0, negpar=0, negimpar=0;
    printf("Ingrese %d numeros enteros:\n",MAX);
    for(int cont=0;cont<MAX;cont++){
        printf("Ingreso nro %d: ",cont+1);
        scanf("%d",&arreglo[cont]);
        if(arreglo[cont]>=0 && arreglo[cont]%2==0){
            pospar+=1;
        }
        else if(arreglo[cont]>=0 && arreglo[cont]%2==1){
            posimpar+=1;
        }
        else if(arreglo[cont]<0 && arreglo[cont]%2==0){
            negpar+=1;
        }
        else {
            negimpar+=1;
        }
    }
    printf("\n");
    printf("nHay %d numeros positivos (incluyendo el 0) y pares.\n",pospar);
    printf("\nHay %d numeros positivos e impares.\n",posimpar);
    printf("\nHay %d numeros negativos y pares.\n",negpar);
    printf("\nHay %d numeros negativos e impares.\n",negimpar);
    return 0;
}
