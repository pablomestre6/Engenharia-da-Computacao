#include <stdio.h>
#include <string.h>

int main()  {

   int idade;
   double salario, altura;
   char genero;
   char nome[50];

   idade = 20;
   salario = 5800.5;
   altura = 1.63;
   genero = 'F';
   strcpy(nome, "Maria Silva");


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %d\n", salario);
    printf("ALTURA = %d\n", altura);
    printf("GENERO = %d\n", genero);
    printf("NOME = %d\n", nome);



     
    return 0;
}