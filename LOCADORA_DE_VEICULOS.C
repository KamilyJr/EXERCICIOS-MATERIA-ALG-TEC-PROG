/* Nome do programa: Locadora de Veiculos
   Autores: Lorranny Regina de Matos Cunha, Gabriel Soares da Silva, Kamily Lira Maioli da Silva
   Data: 05/11/2026
   Descricao:  O programa simula um terminal de autoatendimento de uma locadora de veiculos. O cliente informa quantas diarias
   deseja (R$ 120,00 cada) e se quer contratar o seguro total (R$ 50,00 por dia). O programa calcula o subtotal multiplicando
   os dias pelo valor da diaria, aplica 10% de desconto se forem 5 dias ou mais e soma o valor do seguro, caso o cliente tenha
   aceitado. No final, mostra um extrato com o subtotal, o desconto, o seguro e o valor final a pagar, que e o subtotal menos
   o desconto mais o seguro.
*/

#include <stdio.h>

int main() {

    int dias, opcao;
    float valorDiaria = 120, valorSeguro = 50;
    float subtotal, desconto = 0, totalSeguro = 0, totalFinal;

    printf("*** Bem-vindo ao Sistema de Autoatendimento da Locadora de Veiculos ***\n\n");
    printf(" - O valor da diaria de um carro popular e de R$ 120,00.\n");
    printf(" - Clientes que alugam por 5 dias ou mais recebem 10%% de desconto sobre o valor total das diarias.\n");
    printf(" - Voce tambem pode contratar um seguro total, com custo adicional de R$ 50,00 por dia.\n\n");

    do {
        printf("Quantas diarias voce quer contratar? \n");
        scanf("%i", &dias);
    } while (dias < 1);

    subtotal = dias * valorDiaria;

    if (dias >= 5) {
        desconto = subtotal * 0.10;
    }

    do {
        printf("\nDeseja contratar o seguro total de R$ 50,00 por dia? (Digite 1 para SIM e 2 para NAO) \n");
        scanf("%i", &opcao);

        if (opcao != 1 && opcao != 2) {
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 1 && opcao != 2);

    switch (opcao) {
        case 1:
            printf("Voce escolheu o seguro. Parabens, seu carro estara protegido!\n");
            totalSeguro = valorSeguro * dias;
            break;

        case 2:
            printf("Voce escolheu nao contratar o seguro. Tome cuidado com o veiculo!\n");
            break;
    }

    totalFinal = subtotal - desconto + totalSeguro;

    printf("\n========== EXTRATO DO ALUGUEL ==========\n");
    printf("Quantidade de diarias: %i\n", dias);
    printf("Subtotal das diarias:  R$ %.2f\n", subtotal);
    printf("Desconto aplicado:     R$ %.2f\n", desconto);
    printf("Total do seguro:       R$ %.2f\n", totalSeguro);
    printf("----------------------------------------\n");
    printf("VALOR FINAL A PAGAR:   R$ %.2f\n", totalFinal);
    printf("========================================\n");

    return 0;
}
