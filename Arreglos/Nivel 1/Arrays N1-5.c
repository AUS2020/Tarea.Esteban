#include <stdio.h>
#include <conio.h>
#define MAX 10

int main ()
{
    float arreglo[MAX];
    int i;
    float prom=0, suma=0;
    printf("Ingrese %d numeros cualesquiera. Mostraremos cuales de ellos superan al promedio.\n",MAX);
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%f",&arreglo[i]);
        suma+=arreglo[i];
    }
    printf("Los numeros que ingreso fueron: ");
    for(i=0;i<MAX;i++){
        printf("--> %.2f\n",arreglo[i]);
    }
    prom=suma/MAX;
    printf("\n\nEl promedio de los numeros es %.2f.",prom);
    printf("\n\nLos numeros que superan al promedio son:\n");
    for(i=0;i<MAX;i++){
        if(arreglo[i]>prom){
            printf("--> %.2f\n",arreglo[i]);
        }
    }
    return 0;
}
