#include <stdio.h>
#include <string.h>

int main()  {

   int idade;
   double salario, altura;
   char genero;
   char nome[50];


//lembrar dos placeholders
   printf("Digite o valor idade ");
   scanf("%d", &idade);
   printf("Digite o valor do salario: ");
   scanf("%lf", &salario);
   printf("Digite o valor da altura: ");
   scanf("%lf", &altura);
   printf("Digite nome dessa pessoa");
   fgets(nome, 50, stdin);


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %d\n", salario);
    printf("ALTURA = %d\n", altura);
    printf("GENERO = %d\n", genero);
    printf("NOME = %s\n", nome);

     
    return 0;
}