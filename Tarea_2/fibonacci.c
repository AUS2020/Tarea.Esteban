#include <stdio.h>
#define MAX 25
int main ()
{
    int nro1=0, nro2=1;
    int fibo=0;
    printf("SUCESION DE FIBONACCI\n");      //0+1=1 / 1+1=2 / 1+2=3 / 2+3=5 / 3+5=8 / 5+8=13 / 8+13=21 /
    printf("%d %d ",nro1,nro2);
    for(int cont=1;cont<=25;cont++){    //1 2 3 5 8 13 21
            fibo=nro1+nro2;
            printf("%d ",fibo);
            nro1=nro2;
            nro2=fibo;
    }
    return 0;
}
