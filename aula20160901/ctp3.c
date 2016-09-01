#include <stdio.h>
#include <ctype.h>
int main(){
    char frase [256];
    char olheiro;
    int indice = 0;
    int charcount = 0;
    printf("Entre com uma frase:\n");
    gets (frase);
    olheiro = frase [indice];
    while(olheiro != '\0'){
        if (isalpha(olheiro)){
            charcount++;
        }
        indice++;
        olheiro = frase [indice];
    }
    printf ("A frase tem %d caracteres\n", charcount);
    return 0;

}
