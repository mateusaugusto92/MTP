#include <stdio.h>
#include <stdlib.h>
int main () {
   int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int cont=0;
    unsigned char *p= NULL, *q;
    p=q=(unsigned char*) vetor;
   for(;p<q+sizeof (vetor);p++){
   if (*p==0xFF)
    cont++;
    printf("%p: %x\n", p, *p);
   }
   printf("O numero de bytes apenas com 1's: %d\n", cont);

return 0;}
