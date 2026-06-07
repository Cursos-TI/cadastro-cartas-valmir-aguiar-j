#include <stdio.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das Cartas
// Nivel Mestre: Cadastro de duas cartas, calculos e comparacao de propriedades

int main() {

    // --- Variaveis Carta 1 ---
    char codigo1[10];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // --- Variaveis Carta 2 ---
    char codigo2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ========== CADASTRO CARTA 1 ==========
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // ========== CADASTRO CARTA 2 ==========
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // ========== EXIBICAO DAS CARTAS ==========
    printf("\n========================================\n");
    printf("--- CARTA 1: %s ---\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- CARTA 2: %s ---\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ========== COMPARACOES ==========
    printf("\n========================================\n");
    printf("=== Resultado das Comparacoes ===\n\n");

    // Populacao (maior vence)
    printf("Populacao: ");
    if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // Area (maior vence)
    printf("Area: ");
    if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (area2 > area1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // Pontos Turisticos (maior vence)
    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (densidade2 < densidade1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // PIB per Capita (maior vence)
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (pibPerCapita2 > pibPerCapita1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    // Super Poder (maior vence)
    printf("Super Poder: ");
    if (superPoder1 > superPoder2)
                printf("Carta 1 (%s) venceu!\n", codigo1);
    else if (superPoder2 > superPoder1)
                printf("Carta 2 (%s) venceu!\n", codigo2);
    else
                printf("Empate!\n");

    return 0;
}
