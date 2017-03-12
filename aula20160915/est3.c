#include <stdio.h>
#define QNTDMAX 1000
int n;
struct CADASTRO{
    char nome[100];
    int idade;
    int telefone;
    };
struct CADASTRO vetor[50];
void cadastrar()
{
   int i;
	for(i = 0 ; i < n ; i++)
	{
		printf("\nCadastrando");
		printf ("\nNome:\n");
		fflush(stdin); // Limpa o buffer do teclado.
		gets(vetor[i].nome);
		printf("Idade:\n");
		scanf("%d", &vetor[i].idade);
		printf("Telefone:\n");
		scanf("%d", &vetor[i].telefone);
}
}
void nomes ()
{
printf("Nomes cadastrados:\n");
int i;
	for(i = 0 ; i < n ; i++)
printf("%s\n", vetor[i].nome);
}
void idades ()
{
    int i;
printf("Idades cadastrados:\n");
	for(i = 0 ; i < n ; i++)
printf("%d\n", vetor[i].idade);
}
void telefones ()
{
    int i;
printf("Telefones cadastrados:\n");
	for(i = 0 ; i < n ; i++)
printf("%d\n", vetor[i].telefone);
}
int main (){
    int opcao;
    printf("Digite o numero de pessoas que devem ser cadastradas:\n");
	scanf("%d", &n);
    do {
    printf("Escolha o que deseja fazer:\n");
    printf("Digite 1 para cadastrar pessoas.\n");
    printf("Digite 2 para listar todos os nomes cadastrados.\n");
    printf("Digite 3 para listar todas as idades cadastradas.\n");
    printf("Digite 4 para listar todos os telefones cadastradas.\n");
    printf("Digite 5 para sair.\n");
    scanf("%d", &opcao);
switch (opcao)
{
        case 1:
            cadastrar();
            break;
        case 2:
           nomes ();
           break;
        case 3:
           idades ();
           break;
        case 4:
            telefones ();
            break;
}
    }while(opcao!=5);


return 0;}
