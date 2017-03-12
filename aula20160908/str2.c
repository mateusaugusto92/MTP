#include <stdio.h>
int main (){
    char frase[500], verificador[500];
    int i,j=0;
    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase, 500, stdin);
    if(frase[0]!=' ')
    {verificador[j]=frase[0];
    j++;}
    for(i=0;frase[i]!='\0';i++){
        if (frase[i]==' '){
        if(frase[i+1]!=' '){

        verificador[j]=frase[i+1];
    j++;}}

}
verificador[j]='\0';
  printf("%s",verificador);

return 0;}
