#include <stdio.h>

int main() {

    // dados da carta 1
    char estado1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // dados da carta 2
    char estado2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // cadastro carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibPerCapita1;

    // cadastro carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibPerCapita2;

    // exibindo as cartas
    printf("\nCarta 1 - %s:\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("\nCarta 2 - %s:\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // comparacoes
    printf("\n--- Comparacoes ---\n");

    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu\n");
    } else if (area2 > area1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Pontos turisticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu\n");
    } else if (pontos2 > pontos1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    // densidade: menor vence
    printf("Densidade populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu\n");
    } else if (densidade2 < densidade1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("PIB per capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Super poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu\n");
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}
