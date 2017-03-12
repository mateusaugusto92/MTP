#include <stdio.h>
#include <stdlib.h> // acessar rand ()
#include <time.h>
int jogo_dado();
int main ()
{
int s;
    srand (time(0));
	printf("jogue o primeiro dado!\n");
	jogo_dado();
    s=jogo_dado();
	if (s>=27)
printf("Parabens!Voce ganhou!\n");
else
printf("vc perdeu\n");
return 0;
}
int jogo_dado()
{
	int i, soma, tentativa;
	do{
	tentativa=1;
	int a, b, c, d, e, f;
for(i=0;i<5; i++)
{


}
soma=a+b+c+d+e+f;
tentativa++;
}while(tentativa<3);
return soma;
}
