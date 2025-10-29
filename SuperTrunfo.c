#include <stdio.h>  // Biblioteca padrão de entrada e saída (necessária para printf e scanf)
#include <stdlib.h>
#include <time.h>

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
    int opcao;  // Para o menu

    // Entrada de dados da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_percapta1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Digite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da Carta 2 (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_percapta2 = (pib2 * 1000000000) / populacao2;

    // ===== MENU INTERATIVO =====
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // ===== SWITCH PARA ESCOLHA =====
    switch(opcao) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("%s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("%s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("%s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);

            if (pontos1 > pontos2)
                printf("%s venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("%s venceu! (menor densidade é melhor)\n", cidade1);
            else if (densidade2 < densidade1)
                printf("%s venceu! (menor densidade é melhor)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    }

    printf("\n=== Fim do jogo! ===\n");

    return 0;
}
