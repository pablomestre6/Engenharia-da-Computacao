#include <stdio.h>

int main() {
    int m;

    printf("Digite uma sequencia de numeros inteiros positivos.\n");
    printf("Para parar, digite um numero negativo ou zero.\n");

    while (1) {
        printf("\nDigite um numero m: ");
        scanf("%d", &m);

        // Condição de parada
        if (m <= 0) {
            printf("Fim do programa.\n");
            break;
        }

        // Caso 1: m eh par
        if (m % 2 == 0) {
            int contadorDivisores = 0;
            for (int i = 1; i <= m; i++) {
                if (m % i == 0) {
                    contadorDivisores++;
                }
            }
            printf("O numero %d e par e possui %d divisores.\n", m, contadorDivisores);
        }
        // Caso 2: m eh impar e menor que 10
        else if (m < 10) {
            int fatorial = 1;
            for (int i = 1; i <= m; i++) {
                fatorial *= i;
            }
            printf("O numero %d e impar e menor que 10. Seu fatorial e: %d\n", m, fatorial);
        }
        // Caso 3: m eh impar e maior ou igual a 10
        else {
            int soma = 0;
            for (int i = 1; i <= m; i++) {
                soma += i;
            }
            printf("O numero %d e impar e maior ou igual a 10. A soma de 1 ate %d e: %d\n", m, m, soma);
        }
    }

    return 0;
}