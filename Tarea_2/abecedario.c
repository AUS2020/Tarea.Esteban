#include <stdio.h>

int main ()
{
    char letra;
    printf("ABECEDARIO CON LETRAS\n");
    for(letra='a';letra<='z';letra++){

        printf("%c ",letra);
    }
   printf("\n\n");
   printf("ABECEDARIO CON NUMEROS\n");

   for(char letra2=65;letra2<91;letra2++)
   {
       printf("%c ", letra2);
   }

    return 0;
}
