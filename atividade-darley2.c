#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main() {
    // Declaração de variáveis
    float salario, somaSalarios = 0, maiorSalario = 0;
    int numFilhos, totalPessoas = 0, somaFilhos = 0, pessoasAte100 = 0;

    // Início do loop do-while para ler dados dos habitantes
    do {
        // Solicita o salário do habitante
        printf("Digite o salário (negativo para encerrar): R$ ");
        scanf("%f", &salario); // Lê o salário

        // Verifica se o salário é negativo para encerrar a leitura
        if (salario < 0) {
            break; // Sai do loop
        }

        // Solicita o número de filhos
        printf("Digite o número de filhos: ");
        scanf("%d", &numFilhos); // Lê o número de filhos

        // Acumula os valores para calcular a média depois
        somaSalarios += salario;
        somaFilhos += numFilhos;
        totalPessoas++; // Conta mais uma pessoa

        // Verifica se este é o maior salário até agora
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        // Verifica se o salário é até R$100 para contar no percentual
        if (salario <= 100.0) {
            pessoasAte100++;
        }

    } while (1); // Loop infinito que será interrompido com break

    // Verifica se houve pelo menos uma entrada válida
    if (totalPessoas > 0) {
        // Calcula a média dos salários e número de filhos
        float mediaSalario = somaSalarios / totalPessoas;
        float mediaFilhos = (float)somaFilhos / totalPessoas;

        // Calcula o percentual de pessoas com salário até R$100
        float percentualAte100 = ((float)pessoasAte100 / totalPessoas) * 100.0;

        // Exibe os resultados
        printf("\nResultados da pesquisa:\n");
        printf("a) Média de salário: R$ %.2f\n", mediaSalario);
        printf("b) Média de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salário: R$ %.2f\n", maiorSalario);
        printf("d) Percentual com salário até R$100,00: %.2f%%\n", percentualAte100);
    } else {
        // Caso nenhuma entrada válida tenha sido feita
        printf("\nNenhum dado foi inserido.\n");
    }

    return 0; // Finaliza o programa
}
