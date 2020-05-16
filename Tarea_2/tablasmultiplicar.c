#include <stdio.h>
#define MAX 10
int main ()
{
    int a=1;
    int valor=1;
    printf("\tTABLAS DE MULTIPLICAR\n\n");

    for(int nro=1;nro<=MAX;nro++){
        if(valor<=10){
        printf("TABLA DEL %d\n",valor);
        valor++;
        }
        for(int b=1;b<=10;b++){
            printf("\t\t\t%d x %d\n",a,b);
        }
        printf("\n");
        a++;
    }

    return 0;
}
