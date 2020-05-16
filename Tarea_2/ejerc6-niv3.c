#include <stdio.h>

int main ()
{
    char caracter, caracter2;
    printf("Ingrese dos caracteres separados por espacio. Crearemos diferentes salidas a partir de ellos.\n");
    scanf("%c %c",&caracter,&caracter2);
    printf("TIPO MATRIZ\n");
    for(int cont=1;cont<=4;cont++) {
        printf("\t\t | ");
        for(int cont=1;cont<=6;cont++){
            printf("%c ",caracter);
        }
       printf("|");
       printf("\n");
    }
    printf("\n");
    printf("TIPO ESCALERA\n");
    for(int cont=1;cont<6;cont++){
        printf("\t\t");
        for (int cont2=0;cont2<cont;cont2++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("TIPO ESCALERA DESCENDENTE\n\n");
    for(int desc=5, cont=0;cont<=5;cont++){
        printf("\t\t");
        for (int cont2=0;cont2<desc;cont2++){
            printf("* ");
        }
        desc--;
        printf("\n");
    }
    printf("TIPO MATRIZ CON DOBLE VARIABLE\n\n");
    for(int cont=1, cont2=0;cont<=4;cont++) {
        printf("\t\t");
        for(int cont=1;cont<=7;cont++){
            cont2++;
            if(cont2%2==0){
                printf("%c ", caracter2);
            }
            else{
                printf("%c ",caracter);
            }
        }
        cont2-2;
        printf("\n");
    }
    return 0;
}
