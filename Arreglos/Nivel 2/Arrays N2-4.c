#include <stdio.h>
#include <stdlib.h>     /** ME PERMITE USAR LAS FUNCIONES rand() Y srand()*/
#include <time.h>       /** ME PERMITE USAR LA FUNCION time() */
#define MAX 10

int main ()
{
    int i;
    int A[MAX];
    srand(time(NULL));

    printf("Array A:\n");
    for(i=0;i<MAX;i++){
        A[i]=rand();
        printf("Valor %d: ",i+1);
        printf("%d\n",A[i]);
    }
    printf("\nEl array invertido queda como sigue:\n");
    for(int pos=0, j=9, i=0;pos<MAX;i++,j--,pos++){    /** HASTA QUE NO LLEGUE A 10 (USANDO pos) NO TERMINA*/
        i=j;                   /** CON j REEMPLAZAMOS EL INDICE DE i PARA QUE LA ULTIMA POSICION SEA LA PRIMERA QUE APAREZCA*/
        printf("Valor %d: ",pos+1);
        printf("%d\n",A[i]);
    }

    return 0;
}
