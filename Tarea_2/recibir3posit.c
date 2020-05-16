#include <stdio.h>

int main ()
{
    int n,p,m;
    int nro=0, suma=0;
    printf("Ingrese tres numeros enteros positivos, separados por espacio. \n");
    printf("El primer numero que ingrese debe ser menor que el ultimo numero. \n");
    scanf("%d %d %d",&n,&p,&m);
    while(n>=m || n<0 || p<0 || m<0){
        printf("Recuerde: deben ser positivos y el primer numero debe ser menor que el ultimo.\n");
        scanf("%d %d %d",&n,&p,&m);
    }
    while(suma<=m) {
        suma=n+(nro*p);
        if(suma>m){
            break;
        }
        printf("%d ",suma);
        nro++;
    }
    return 0;
}
