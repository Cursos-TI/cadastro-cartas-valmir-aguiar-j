#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char codigo[10];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidade;
    float pibPerCapita;

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (km2): ");
    scanf("%f", &area);

    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = (float)populacao / area;
    pibPerCapita = pib / (float)populacao;

    printf("\n--- CARTA: %s ---\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade: %.2f hab/km2\n", densidade);
    printf("PIB per capita: %.2f\n", pibPerCapita);

    return 0;
}
