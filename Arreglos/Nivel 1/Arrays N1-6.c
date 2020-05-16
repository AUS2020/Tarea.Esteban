#include <stdio.h>
#include <math.h>
#define MAX 3

int main ()
{
    float arreglo[MAX];
    int i, nro;
    float prom=0, suma=0;
    double var=0, var1=0;
    printf("Ingrese %d numeros enteros entre 0 y 100. Calcularemos la sumatoria, el promedio y la varianza.\n",MAX);
    for(i=0;i<MAX;i++){
        printf("Ingreso nro %d: ",i+1);
        scanf("%f",&arreglo[i]);
        while(arreglo[i]<=0 || arreglo[i]>100){
            printf("Numero incorrecto. Ingrese nuevamente.\n");
            printf("Ingreso nro %f: ",i+1);
            scanf("%f",&arreglo[i]);
        }
        suma+=arreglo[i];
    }
    prom=suma/MAX;                      //HAY QUE DECLARAR POTENCIAS CON MATH.H Y COMO DOUBLE (RECORDAR PONER %lf)
    var= pow(suma-(prom),2)/MAX;
    var1= pow(suma-(prom),2)/(MAX-1);
    printf("\nLa suma da %.0f.",suma);
    printf("\nEl promedio da %.2f.",prom);
    printf("\nLa varianza de acuerdo a la poblacion es %.2lf.",var);
    printf("\nLa varianza de acuerdo a la muestra es %.2lf.",var1);
    return 0;
}

