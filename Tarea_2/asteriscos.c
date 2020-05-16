#include <stdio.h>
#define MAX 15

int main ()
{
    int nro;

    printf("Ingrese un numero entero entre 1 y %d.\n", MAX);
    scanf("%d", &nro);
    while(nro<1 || nro>15 || nro==0) {
        printf("Ingrese un numero correcto. \n");
        scanf("%d", &nro);
        }
    for(int cont=1;cont<=nro;cont++)
    {
        printf("*%d ",cont);
    }
    return 0;
}

