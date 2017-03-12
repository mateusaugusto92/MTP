#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (){
char frase[256];
int i;
printf ("Entre com uma frase: ");
gets(frase);
    for(i=0;frase[i]; i++)
    frase[i]=toupper(frase[i]);
    printf ("A frase tem %d caracteres.\n", strlen(frase));
    if(strcmp(frase, "BOM DIA")==0)
        printf("Bom dia pra voce tambem!");
    else
                printf("Voce quer dizer: %s?", frase);
    return 0;}
