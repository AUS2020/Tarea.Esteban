#include <stdio.h>
#define MAX 4

//Intenté hacer una matriz ingresando solo un numero, debido que para hacer este ej. necesitamos usar arrays y todavia no lo dimos.
//Aparenta ser una matriz aunque teoricamente no lo sea.

int main ()
{
    char caracter;
    printf("Ingrese un caracter. Crearemos una matriz a partir de el.\n");
    scanf("%c",&caracter);
    for(int cont=1;cont<=MAX;cont++) {
        printf("\t\t | ");
        for(int cont2=1;cont2<=MAX;cont2++){
            printf("%c ",caracter);
        }
       printf("|");
       printf("\n");
    }
    return 0;
}
