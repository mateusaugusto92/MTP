#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void recebe(char tipo, void * endereco);
void recebeSTR(char * endereco, int n);
typedef struct {
	char nome[32];
	int codigo;
	float preco;
}PRODUTO;
typedef struct{
	int codigo;
	int quantidade;
}VENDAS;
PRODUTO incluir ();
void mostrar(PRODUTO *vetor, int tamanho);
PRODUTO * excluir(PRODUTO *vetor, int tamanho);
VENDAS incluirVENDAS ();
VENDAS * excluirVENDAS (VENDAS * vetor, int tamanho);
void mostrarVENDAS (VENDAS *vetor, int tamanho);
int main ()
{
	PRODUTO *vetor=NULL;
	VENDAS *vetor1=NULL;
	vetor=(PRODUTO*)malloc(sizeof(PRODUTO));
	vetor1=(VENDAS*)malloc(sizeof(VENDAS));
	int opcao, tamanho=0, tamanho1=0;
	do{

	printf("O que deseja fazer?\n");
	printf("Incluir produto, aperte 1.\n");
	printf("Excluir produto, aperte 2.\n");
	printf("Ver todos os produtos, aperte 3.\n");
	printf("Incluir venda, aperte 4.\n");
	printf("Excluir venda, aperte 5.\n");
	printf("Ver todas as vendas, aperte 6.\n");
	printf("Sair, aperte 7.\n");
	recebe('i', &opcao);
	switch(opcao)
	{
		case 1:
			vetor[tamanho]=incluir();
			tamanho++;
			vetor=(PRODUTO*)realloc(vetor, tamanho*sizeof(PRODUTO)+sizeof(PRODUTO));
			break;
		case 2:
			vetor=excluir(vetor, tamanho);
			tamanho--;
			break;
		case 3:
			mostrar(vetor, tamanho);
			break;
		case 4:
			vetor1[tamanho1]=incluirVENDAS();
			tamanho1++;
			vetor1=(VENDAS*)realloc(vetor1, tamanho1*sizeof(VENDAS)+sizeof(VENDAS));
		break;
		case 5:
			vetor1=excluirVENDAS(vetor1, tamanho1);
			tamanho1--;
			break;
		case 6:
			mostrarVENDAS(vetor1, tamanho1);
			break;
	}
	}while(opcao!=7);
	free(vetor);
	free(vetor1);
	return 0;
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
PRODUTO incluir ()
{
	PRODUTO cadastro;
	printf("Digite o nome:\n");
	recebeSTR(cadastro.nome, 32);
	printf("Digite o codigo:\n");
	recebe('i', &cadastro.codigo);
	printf("Digite o preco:\n");
	recebe('f', &cadastro.preco);
	return cadastro;

}
PRODUTO * excluir(PRODUTO * vetor, int tamanho)
{
	int i, j, opcao;
	PRODUTO * auxiliar=(PRODUTO *)malloc((tamanho-1)*sizeof(PRODUTO));
	printf("Qual produto deseja excluir?\n");
	recebe('i', &opcao);
	for(i=0, j=0;i<tamanho;i++)
		if(i!=opcao-1){
			auxiliar[j]=vetor[i];
			j++;
			}
	free(vetor);
	return auxiliar;
}
void mostrar(PRODUTO *vetor, int tamanho)
{
	int i;
	for (i=0; i<tamanho;i++){
	printf("PRODUTO %d\n", i+1);
	printf("nome: %s\n", vetor[i].nome);
	printf("codigo: %d\n", vetor[i].codigo);
	printf("preco: %g\n", vetor[i].preco);
	printf("\n");
}
}
VENDAS incluirVENDAS ()
{
	VENDAS cadastro;
	printf("Digite o codigo:\n");
	recebe('i', &cadastro.codigo);
	printf("Digite a quantidade:\n");
	recebe('i', &cadastro.quantidade);
	return cadastro;

}
VENDAS * excluirVENDAS (VENDAS * vetor, int tamanho)
{
	int i, j, opcao;
	VENDAS * auxiliar=(VENDAS *)malloc((tamanho-1)*sizeof(VENDAS));
	printf("Qual venda deseja excluir?\n");
	recebe('i', &opcao);
	for(i=0, j=0;i<tamanho;i++)
		if(i!=opcao-1){
			auxiliar[j]=vetor[i];
			j++;
			}
	free(vetor);
	return auxiliar;
}
void mostrarVENDAS (VENDAS *vetor, int tamanho)
{
	int i;
	printf("VENDAS:\n");
	for (i=0; i<tamanho;i++){
	printf("codigo: %d\n", vetor[i].codigo);
	printf("quantidade: %d\n", vetor[i].quantidade);
	printf("\n");
}
}
