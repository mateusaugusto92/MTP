#include <stdio.h>
struct fracao {
int numerador;
int denominador;
};
struct fracao somar(struct fracao x, struct fracao y);
int main()
{
	struct fracao x, y;
    printf("Informe o numerador e o denominador da primeira fracao: ");
    scanf("%d/%d",&x.numerador, &x.denominador);
    printf("Informe o numerador e o denominador da segunda fracao: ");
    scanf("%d/%d",&y.numerador, &y.denominador);
	printf("O resultado da soma e' %d/%d", somar(x,y).numerador, somar(x,y).denominador);

    return 0;
}
struct fracao somar(struct fracao x, struct fracao y){

	struct fracao soma;
	soma.numerador=x.numerador*y.denominador+x.denominador*y.numerador;
	soma.denominador=x.denominador*y.denominador;
	return soma;
}
