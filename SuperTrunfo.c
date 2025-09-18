#include <stdio.h>  // Biblioteca padrão de entrada e saída (necessária para printf e scanf)

int main() {
    
    // Declaração das variáveis

    // Variáveis da Carta 1
    char estado1;          // Armazena apenas 1 caractere (A-H)
    char codigo1[4];       // Exemplo: "A01" (+1 posição para o \0 do final da string)
    char cidade1[50];      // Nome da cidade (até 49 caracteres + \0)
    int populacao1;        // Número inteiro para a população
    float area1;           // Área em km² (número decimal)
    float pib1;            // PIB em bilhões (número decimal)
    int pontos1;           // Quantidade de pontos turísticos (número inteiro)

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

     // Entrada de dados da Carta 1
    
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

    // Entrada de dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");

    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

   // Saída formatada (mostrando os dados)
    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);  // %.2f = mostra duas casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0; // Indica que o programa terminou corretamente

}
