#include <stdio.h>
#define MAX 5
#define MAXNUM 5

int main ()
{
    int A[MAX], B[MAX], S[MAX];
    int i;

    printf("Ingrese %d numeros enteros para al array A.\n", MAXNUM);
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ", i+1);
        scanf("%d",&A[i]);
    }
    printf("Ingrese %d numeros enteros para al array B.\n", MAXNUM);
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ", i+1);
        scanf("%d",&B[i]);
    }

    printf("\nLos numeros del array A son:\n");
    for(i=0;i<MAX;i++){
        printf(" ->  %d\n",A[i]);
    }
    printf("\nLos numeros del array B son:\n");
    for(i=0;i<MAX;i++){
        printf(" ->  %d\n",B[i]);
    }
    printf("\nLa sumatoria de ambos arrays es: \n");
    for(i=0;i<MAX;i++){
        S[i]=A[i]+(B[i]);
        printf(" -> %d + %d = %d\n",A[i],B[i],S[i]);
    }
    return 0;
}
