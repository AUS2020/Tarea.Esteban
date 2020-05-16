#include <stdio.h>

int main ()
{
    int cont, inicial;
    unsigned long int nro;
    printf("Ingrese un numero entero positivo. Determinaremos su factorial.\n");
    scanf("%d",&nro);
    while(nro<0){
        printf("Ingrese un numero correcto.\n");
        scanf("%d",&nro);
    }
    cont=nro, inicial=nro;
    cont=cont-1;
    while(cont!=0){
        nro=(nro)*(cont);
        cont--;
    }
    printf("El factorial de %d es %i",inicial, nro);
    return 0;
}
