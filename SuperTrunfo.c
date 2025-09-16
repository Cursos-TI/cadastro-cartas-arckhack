#include <stdio.h>

int main(){

    //Declarando as variáveis da Carta 1
    char estado1;
    char codigo1[9];
    char cidade1[20];
    int população1;
    float área1;
    float PIB1;
    int turistico1;

     //Declarando as variáveis da Carta 2
    char estado2;
    char codigo2[9];
    char cidade2[20];
    int população2;
    float área2;
    float PIB2;
    int turistico2;

    //iniciando as variáveis da Carta 01
    printf("=== Carta 1 ===\n");

    printf("Escolha uma letra (A-H): ");
    scanf("%c", &estado1);
    printf("O Estado da Carta 01 é: %c\n", estado1);

    printf("Escolha o código da carta (A01-B03): ");
    scanf("%s", codigo1);
    printf("O Estado da Carta 01 é: %s\n", codigo1);

    printf("Escolha o nome da cidade: ");
    scanf("%s", cidade1);
    printf("O nome da cidade da Carta 01 é: %s\n", cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%.f", &população1);
    printf("O número de habitantes da Carta 01 é: %.f\n", população1);

    printf("Digite o tamanho da área em km²: ");
    scanf("%f", &área1);
    printf("A área da cidade da Carta 1 é: %f\n", área1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("O PIB da cidade é: %f\n", PIB1);

    printf("Digite quantos pontos turisticos há na cidade: ");
    scanf("%f", &turistico1);
    printf("A cidade possui a seguinte quantidade de pontos turisticos: %c\n", turistico1);

}