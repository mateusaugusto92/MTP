#include <stdio.h>
#include <stdlib.h>
char * iniciatexto();
void recebetexto();
int main() {
    char * texto = iniciatexto();
    printf("::::INICIO::::\n");
    recebetexto(&texto);
    printf("\n Voce digitou\n");
    printf("%s\n", texto);
    printf("tamanho da string: %d\n", strlen(texto));
    return 0;

return 0;
}
char * iniciatexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto [0] = '\0';
    return texto;
}
void recebetexto(char ** texto){
    char * aux;
    int c, tamanho = 0;
    do {
        c = getchar();
        if(c != '#'){
            aux = (char *) realloc(*texto, tamanho+2);
            if (aux != NULL){
                *texto = aux;
                (*texto)[tamanho] = c;
                tamanho++;
                (*texto)[tamanho] = '\0';
            }
            else printf ("-=|ERRO! SEM MEMORIA|=-");
        }
    }while(c != '#');
}
