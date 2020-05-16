#include <stdio.h>
#include <stdlib.h>     /** ME PERMITE USAR LAS FUNCIONES rand() Y srand()*/
#include <unistd.h>       /** ME PERMITE USAR LA FUNCION getpid() */
#define MAX 10

int main ()
{
    int i;
    int A[MAX];
    int contPAR=0, contIMPAR=0;
    int aleatorio;
    srand(getpid());    /** TOMA EL IDENTIFICADOR UNICO DE CADA PROCESO QUE SE EJECUTA */
                        /** ES MAS EFECTIVO Y ALEATORIO*/
    printf("Arreglo A:\n");
    for(i=0;i<MAX;i++){
        aleatorio=rand()%(100+1);   /** GUARDAMOS EL VALOR ALEATORIO ACOTADO EN UNA NUEVA VARIABLE */
        A[i]=aleatorio;
        if(A[i]%2==0){
            contPAR+=1;
        }
        else
            contIMPAR+=1;
        printf("Valor %d: ",i+1);
        printf("%d\n",A[i]);
    }
    printf("\nEL ARREGLO A FUE CARGADO ALEATORIAMENTE CON NROS ENTRE 0 Y 100.\n");
    printf("\nTiene %d numeros pares y %d numeros impares\n",contPAR,contIMPAR);
    if(contPAR>contIMPAR){
        printf("\nPor lo tanto, tiene mas numeros pares que impares.\n");
    }
    else if(contPAR==contIMPAR){
        printf("\nPor lo tanto, tienen la misma cantidad de numeros pares e impares.\n");
    }
    else {
        printf("\nPor lo tanto, tiene mas numeros impares que pares.\n");
    }
    return 0;
}
