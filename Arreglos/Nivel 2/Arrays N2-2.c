#include <stdio.h>
#include <stdlib.h>     /** ME PERMITE USAR LAS FUNCIONES rand() Y srand()*/
#include <time.h>       /** ME PERMITE USAR LA FUNCION time() */
#define MAX_A 10
#define MAX_B 10

int main ()
{
    int i;
    int A[MAX_A];
    int B[MAX_B];
    int contadorA=0, contadorB=0;
    srand(time(NULL));

    printf("Arreglo A:\n");
    for(i=0;i<MAX_A;i++){
        A[i]=rand();
        if(A[i]%2==0){
            contadorA+=1;
        }
        printf("Valor %d: ",i+1);
        printf("%d\n",A[i]);
    }
    printf("\nArreglo B:\n");
    for(i=0;i<MAX_B;i++){
        B[i]=rand();
        if(B[i]%2==0){
            contadorB+=1;
        }
        printf("Valor %d: ",i+1);
        printf("%d\n",B[i]);
    }
    printf("\nCantidad de numeros enteros pares del arreglo A: %d y del arreglo B: %d\n",contadorA,contadorB);
    if(contadorA>contadorB){
        printf("\nEl arreglo A tiene mas numeros enteros pares.\n");
    }
    else if(contadorA==contadorB){
        printf("\nAmbos arreglos tienen la misma cantidad de numeros enteros pares.\n");
    }
    else {
        printf("\nEl arreglo B tiene mas numeros enteros pares.\n");
    }
    return 0;
}
