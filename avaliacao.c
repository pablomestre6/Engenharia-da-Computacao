#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    int m;  // Declara uma variável inteira para armazenar o número digitado

    // Mensagens iniciais para o usuário
    printf("Digite uma sequencia de numeros inteiros positivos.\n");
    printf("Para parar, digite um numero negativo ou zero.\n");

    // Loop infinito que só será interrompido com break
    while (1) {
        // Solicita ao usuário que digite um número
        printf("\nDigite um numero m: ");
        scanf("%d", &m);  // Lê o número digitado e armazena em 'm'

        // Condição de parada: se m for menor ou igual a zero, encerra o programa
        if (m <= 0) {
            printf("Fim do programa.\n");
            break;  // Sai do loop
        }

        // Caso 1: se m for par
        if (m % 2 == 0) {
            int contadorDivisores = 0;  // Variável para contar os divisores de m

            // Loop para verificar todos os divisores de m
            for (int i = 1; i <= m; i++) {
                if (m % i == 0) {
                    contadorDivisores++;  // Incrementa se i for divisor de m
                }
            }

            // Exibe o resultado para números pares
            printf("O numero %d e par e possui %d divisores.\n", m, contadorDivisores);
        }

        // Caso 2: se m for ímpar e menor que 10
        else if (m < 10) {
            int fatorial = 1;  // Variável para armazenar o fatorial

            // Calcula o fatorial de m
            for (int i = 1; i <= m; i++) {
                fatorial *= i;  // Multiplica fatorial por i a cada passo
            }

            // Exibe o resultado para números ímpares menores que 10
            printf("O numero %d e impar e menor que 10. Seu fatorial e: %d\n", m, fatorial);
        }

        // Caso 3: se m for ímpar e maior ou igual a 10
        else {
            int soma = 0;  // Variável para armazenar a soma de 1 até m

            // Calcula a soma de todos os números de 1 até m
            for (int i = 1; i <= m; i++) {
                soma += i;  // Adiciona i à soma
            }

            // Exibe o resultado para números ímpares maiores ou iguais a 10
            printf("O numero %d e impar e maior ou igual a 10. A soma de 1 ate %d e: %d\n", m, m, soma);
        }
    }

    return 0;  
}