#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite uma sequencia de numeros.\n");
    printf("A media sera calculada apenas para os numeros pares.\n");
    printf("Para terminar, digite 0.\n");

    // Loop para ler os numeros
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // Verifica se o numero e par e diferente de zero
        if (numero % 2 == 0 && numero != 0) {
            soma += numero;
            contador++;
        }

    } while (numero != 0);

    // Calcula e exibe a media se houver numeros pares
    if (contador > 0) {
        media = (float)soma / contador;
        printf("\nVoce digitou %d numeros pares.\n", contador);
        printf("A media dos numeros pares e: %.2f\n", media);
    } else {
        printf("\nNenhum numero par foi digitado.\n");
    }

    return 0;
}