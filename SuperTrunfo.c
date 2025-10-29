#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_percapta1, pib_percapta2;
    int opcao1, opcao2;

    // ===== Entrada de dados - Carta 1 =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_percapta1 = (pib1 * 1000000000) / populacao1;

    // ===== Entrada de dados - Carta 2 =====
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_percapta2 = (pib2 * 1000000000) / populacao2;

    // ===== MENU DE ESCOLHA DOS ATRIBUTOS =====
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo (dinâmico)
    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != opcao1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
    } while (opcao2 == opcao1);

    // Função auxiliar para comparar dois atributos
    float valor1_a = 0, valor2_a = 0;
    float valor1_b = 0, valor2_b = 0;
    float soma1 = 0, soma2 = 0;

    // ===== Função para pegar o valor de um atributo =====
    float getValor(int opcao, int pop, float area, float pib, int pontos, float dens) {
        switch (opcao) {
            case 1: return pop;
            case 2: return area;
            case 3: return pib;
            case 4: return pontos;
            case 5: return dens;
            default: return 0;
        }
    }

    // Obtém valores dos atributos escolhidos
    valor1_a = getValor(opcao1, populacao1, area1, pib1, pontos1, densidade1);
    valor2_a = getValor(opcao1, populacao2, area2, pib2, pontos2, densidade2);
    valor1_b = getValor(opcao2, populacao1, area1, pib1, pontos1, densidade1);
    valor2_b = getValor(opcao2, populacao2, area2, pib2, pontos2, densidade2);

    // ===== Exibição clara dos resultados =====
    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

    // Atributo 1
    printf("\nComparando o primeiro atributo:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1_a);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2_a);

    // Regra especial da densidade
    int vencedorA = (opcao1 == 5) ?
        ((valor1_a < valor2_a) ? 1 : (valor2_a < valor1_a) ? 2 : 0) :
        ((valor1_a > valor2_a) ? 1 : (valor2_a > valor1_a) ? 2 : 0);

    // Atributo 2
    printf("\nComparando o segundo atributo:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1_b);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2_b);

    int vencedorB = (opcao2 == 5) ?
        ((valor1_b < valor2_b) ? 1 : (valor2_b < valor1_b) ? 2 : 0) :
        ((valor1_b > valor2_b) ? 1 : (valor2_b > valor1_b) ? 2 : 0);

    // Soma dos atributos (independente de quem venceu individualmente)
    soma1 = valor1_a + valor1_b;
    soma2 = valor2_a + valor2_b;

    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    int vencedorFinal = (soma1 > soma2) ? 1 : (soma2 > soma1) ? 2 : 0;

    printf("\n=== RESULTADO FINAL ===\n");
    if (vencedorFinal == 1)
        printf("%s venceu a rodada!\n", cidade1);
    else if (vencedorFinal == 2)
        printf("%s venceu a rodada!\n", cidade2);
    else
        printf("Empate!\n");

    printf("\n=== Fim do jogo! ===\n");
    return 0;
}
