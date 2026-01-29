#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    printf("Menu\n");
    printf("1 Gotech :\n ");
    printf("2 SIRIUSHR:\n");
}


void recrutamentoslecao(){
   int idade;
   double salario, altura;
   char genero;
   char nome[50];

   idade = 20;
   salario = 5800.5;
   altura = 1.63;
   genero = 'F';
   strcpy(nome, "Pablo José");


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2f\n", salario);     
    printf("ALTURA = %.2f\n", altura);       
    printf("GENERO = %c\n", genero);         
    printf("NOME = %s\n", nome);             
}

void pontoeletronico(){
    char nome[50];
    double baterPonto;

    baterPonto = 1;
    strcpy(nome, "Pablo Jose");

   printf("Bater Ponto %.0f\n", baterPonto);  
   printf("NOME = %s\n", nome);

}


int main()  {
    int op;
    while (1){
        /* code */
        menu();
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            recrutamentoslecao();
            break;
       case 1:
    pontoeletronico();
    break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    
    return 0;
}