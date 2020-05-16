#include <stdio.h>
#include <stdlib.h>     /** ME PERMITE USAR LAS FUNCIONES rand() Y srand()*/
#include <time.h>       /** ME PERMITE USAR LA FUNCION time() */
#define MAX 30

int main ()
{
    int arreglo[MAX];
    srand(time(NULL));      /** DECLARO UNA SOLA VEZ LA FUNCION srand() QUE ME PODRÁ PERMITIR GENERAR NROS ALEATORIOS*/
    for(int i=0;i<MAX;i++){
        arreglo[i]=rand();      /** CON rand() OBTENGO UN VALOR ALEATORIO ENTRE 0 Y UN VALOR MUY GRANDE*/
    }                           /** CADA NRO ALEATORIO LO INTRODUZCO EN UNA POSICION DE MI ARRAY*/

    printf("\nLos valores aleatorios del arreglo son:\n");
    for(int i=0;i<MAX;i++){
        printf("Valor %d: ",i+1);
        printf("%d\n",arreglo[i]);      /** RECORRO EL ARRAY Y MUESTRO LOS VALORES ALEATORIOS GUARDADOS*/
    }
    return 0;
}
