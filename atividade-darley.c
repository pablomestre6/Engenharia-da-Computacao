#include <stdio.h> 

int main()  
{
    int negativo = 0;       // Variável para contar quantos números são negativos
    float num;              // Variável para armazenar cada número digitado

    // Loop que se repete 5 vezes para ler 5 valores
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);

        scanf("%f", &num);

        if (num < 0) {
            negativo++;     // Se for negativo, incrementa o contador
        }
    }

    printf("Você digitou %d valores negativos.\n", negativo);

    return 0;  // Indica que o programa terminou com sucesso
}