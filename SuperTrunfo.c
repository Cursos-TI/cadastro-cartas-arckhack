#include <stdio.h>  // Biblioteca padrão de entrada e saída (necessária para printf e scanf)

int main() {
    
    // Declaração das variáveis

    // Variáveis da Carta 1
    char estado1;          // Armazena apenas 1 caractere (A-H)
    char codigo1[4];       // Exemplo: "A01"
    char cidade1[50];      // Nome da cidade (até 49 caracteres + \0)
    unsigned long int populacao1;   // Alterado para suportar números grandes
    float area1;           // Área em km² (número decimal)
    float pib1;            // PIB em bilhões (número decimal)
    int pontos1;           // Quantidade de pontos turísticos (número inteiro)          

    // Variáveis calculadas da Carta 1
    float densidade1;
    float pib_percapta1;
    float super_poder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis calculadas da Carta 2
    float densidade2;
    float pib_percapta2;
    float super_poder2;

    // Entrada de dados da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);   // lê um caractere (o espaço antes de %c ignora enter anterior)

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);     // lê uma string sem espaços

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);  // lê até encontrar um ENTER (permite espaços no nome da cidade)

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);   // lê um número inteiro

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);        // lê um número decimal (float)

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_percapta1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_percapta1 + (1 / densidade1);

    // Entrada de dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");

    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_percapta2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_percapta2 + (1 / densidade2);

    // Saída formatada (dados das cartas)
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapta1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2); // %.2f = mostra duas casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapta2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapta1 > pib_percapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0; // Indica que o programa terminou corretamente
}