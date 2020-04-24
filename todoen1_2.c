#include <stdio.h>
#define CONSECUTIVOS(x,y) ((x)+1)==y ? "son consecutivos" : "no son consecutivos"

#define DIVISIBLE(x,y) (x)%(y)==0 ? "Son divisibles" : "No son divisibles"

#define MIN_MAX(x, y) (x)<(y) ? y : x

#define PAR(x) x%2==0 ? "PAR" : "IMPAR"

#define ENTRE_0_100(x) x>=0 && x<=100 ? "Se encuentra entre 0 y 100" : "Fuera de rango"

#define MAX(x,y,z) (x)>=(y) ? x : (y)>=(z) ? y : (x)>=(z) ? x : z

int main ()
{
    int ent1, ent2;
    int nro1;
    int numb1, numb2, numb3;
    char cad[2];

    printf("Escriba dos numeros enteros, separados con espacio. Con estos determinaremos algunos aspectos: \n");
    printf("* Si son consecutivos. \n");
    printf("* Si son divisibles. \n");
    printf("* Cual es el maximo. \n");
    scanf("%d %d", &ent1, &ent2);

    printf("--> Los numeros %d y %d %s\n", ent1, ent2, CONSECUTIVOS(ent1,ent2));
    printf("--> %s\n", DIVISIBLE(ent1,ent2));
        if (ent1>ent2 || ent1<ent2)
        {
            printf("--> El numero mas grande entre %d y %d es %d", ent1, ent2, MIN_MAX(ent1, ent2));
        }
        else
        {
            printf("--> Son iguales");
        }

    printf("\n\n");
    printf("A continuacion escribe un numero para determinar los siguientes aspectos: \n");
    printf("* Si es PAR o no. \n");
    printf("* Si esta en 0 y 100. \n");
    printf("Escriba un numeros para determinar si es par o no: \n");
    scanf("%d", &nro1);

    printf("--> El numero es %s\n", PAR(nro1));
    printf("--> %s\n", ENTRE_0_100(nro1));

    printf("\n");
    printf("Por ultimo, escribe tres numeros, separados con espacio, para determinar cual es el mayor: \n");
    scanf("%d %d %d", &numb1, &numb2, &numb3);

    printf("El mayor entre los tres es %d\n\n", MAX(numb1,numb2,numb3));

    printf("Presiona cualquier tecla para salir. Gracias por participar, vuelva prontos! \n");

    return 0;
}

