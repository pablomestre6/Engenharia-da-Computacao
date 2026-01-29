#include <stdio.h>

int main()  {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double idademedia;

    printf("Dados da primeira pessoa: \n");
    printf("Nome da primeria pessoa: \n");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);


    printf("Dados da segunda pessoa: \n");
    printf("Nome da segunda pessoa: \n");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2); 


    idademedia = (double) (idade1 + idade2) / 2;

    printf(" A Idade madia %s e %s he %.1lf", nome1, nome2, idademedia);
     
    return 0;
}