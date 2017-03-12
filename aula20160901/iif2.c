#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>
int main (){
   uint64_t fat;
   int num, i;
 printf("Digite um numero: ");
    scanf("%d", &num);
    fat=1;
    for (i=1; i<=num;i++)
       fat=fat*i;
        printf("O fatorial de %d e igual a %" PRIu64 ".\n", num, fat);
    return 0;

}
