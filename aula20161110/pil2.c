#include <stdio.h>
#include <stdlib.h>
typedef int DADO; // muda o tipo da PILHA aqui
typedef struct Pilha_{
DADO topo;
struct Pilha_* proximo;
}Pilha;
void push (Pilha ** ppilha, DADO elemento);
void pop (Pilha ** ppilha);
DADO top (Pilha * pilha);
int empty (Pilha * pilha);
int main (){
Pilha * pilha= NULL;
int i;
//PROGRAMA
printf("Push: ");
for (i=0;i<5;i++){
        push (&pilha, i); // testa push
        printf("%d", top(pilha));//testa top
}
printf("\nPop: ");
while(!empty(pilha)){ // testa EMPTY
    printf ("%d", top (pilha)); //testa top;
    pop(&pilha);//testa POP;
}
return 0;}
void push (Pilha ** ppilha, DADO elemento)
{
  Pilha * novo= (Pilha*) malloc (sizeof(Pilha)); //criar uma estrutura
  novo->topo=elemento;
  novo->proximo=*ppilha;//nova struct deve apontar para o topo atual
  *ppilha = novo;
}
void pop (Pilha ** ppilha)
{
    Pilha * aux=NULL;
    if (!empty(*ppilha))
    {
        aux= (*ppilha)->proximo;
        free(*ppilha);
        *ppilha=aux;
    }
    else
        fprintf(stdout, "WARNING: a pilha esta vazia!\n");
}
DADO top (Pilha * pilha){
return pilha->topo; }
int empty (Pilha * pilha)
{
return (pilha== NULL);
}
