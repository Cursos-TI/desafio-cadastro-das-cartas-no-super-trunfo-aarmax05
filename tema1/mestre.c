#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados para a primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1e9) / populacao1; // PIB em reais

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2; // PIB em reais

    // Cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparação da População
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação da Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação do PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação do Número de Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta  2 venceu (0)\n");
    }

    // Comparação da Densidade Populacional
    printf("Densidade Populacional: ");
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação do PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação do Super Poder
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}