#include <stdio.h>
#include <stdlib.h> // acessar rand ()
#include <time.h>
#include <string.h>
void roboEd ();
int main()
{
    char frase_usuario[256];
    printf("** Tudo bem? Quer conversar?\n");

    srand (time(0));
    do{
        fgets(frase_usuario,sizeof(frase_usuario),stdin);//mais estavel que o gets, o que, quanto, onde;
        roboEd();
    }while(strncmp(frase_usuario, "tchau", 5)!=0);//strncmp pega o numero de caracteres escolhidos
    printf("Ate a proxima!\n");
    return 0;
}
void roboEd ()
{
    switch (rand()%7){//7 frases disponiveis
case 0:
     printf("** Tudo bem?\n");
     break;
case 1:
     printf("** LOL\n");
     break;
     case 2:
     printf("** Que legal\n");
     break;
 case 3:
     printf("** Que chato\n");
     break;

 case 4:
     printf("** Fale mais sobre isso\n");
     break;
case 5:
     printf("** Ok\n");
     break;
case 6:
     printf("** Sobre o que quer falar?\n");
     break;

}
}
