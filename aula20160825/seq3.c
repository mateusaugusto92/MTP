#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Informe as notas do aluno\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = ((2*n1)+(3*n2)+(5*n3))/10;
    printf("\nA nota do aluno é: %.2f\n", media);
return 0;
}
