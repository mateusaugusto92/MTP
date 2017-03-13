#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char nome [32];
	int idade;

}dados;
dados* incluir(dados* a, int *n);
dados* excluir (dados* info, int *n);
void mostra (dados* a, int n);
void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);
int main (){
	dados* info;
	int op, n=0;
	info=(dados*)calloc(1,sizeof(dados));
	do {
	printf("Escolha o que deseja fazer:\n");
	printf("Incluir dados, digite 1.\n");
	printf("Excluir dados, digite 2.\n");
	printf("Para ver todos os dados, digite 3.\n");
	printf("Para sair, digite 0.\n");
	recebe('i',&op);
	if (op==1)
	info=incluir(info, &n);
	if(op==2)
    info=excluir(info, &n);
	if(op==3)
    mostra(info, n);

	}while(op!=0);

    free(info);
	return 0;
}
dados* incluir(dados* a, int *n)
{
	printf("Digite o nome: ");
	recebeSTR(a[*n].nome,32);
	printf("Digite a idade: ");
	recebe('i', &a[*n].idade);
	a=(dados*)realloc(a, ((*n)+2)*sizeof(dados));
	(*n)++;
	return a;
}
void mostra (dados* a, int n)
{
    int i;
    printf ("DADOS:\n");
    for (i=0;i<n; i++)
        {
     printf ("\nDado %d:\n", i+1);
     printf ("Nome: %s\n", a[i].nome);
     printf ("Idade: %d\n", a[i].idade);
    }
}
dados* excluir (dados* info, int *n)
{

    dados* vet;
    vet=(dados*)malloc(((*n)-1)*sizeof(dados));
    int x, i, j;
    printf("Qual dado vc deseja excluir?\n");
    recebe('i', &x);
    for (i=0, j=0; i<(*n); i++)
    if(i!=(x-1)){
    vet[j]=info[i];
    j++;
    }
    (*n)--;
    free(info);
    return vet;
}

void recebe(char tipo, void * endereco) {
    int c;
    switch(tipo){
        case 'i': scanf("%d",(int*) endereco); break;
        case 'f': scanf("%f",(float*) endereco); break;
        case 'd': scanf("%lf",(double*) endereco); break;
        case 'c': scanf("%c",(char*) endereco); break;
    }
    while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
}

void recebeSTR(char * endereco, int n) {
    fgets(endereco, n, stdin);
    if(endereco[strlen(endereco)-1] == 10)
       endereco[strlen(endereco)-1] = '\0';
}
