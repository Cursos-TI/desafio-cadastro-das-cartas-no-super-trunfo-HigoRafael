#include <stdio.h>

// Higor Rafael Costa Puga

int main()
{
    // -------- Carta 1 --------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1; // PIB em bilhões
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // -------- Carta 2 --------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2; // PIB em bilhões
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // -------- Exibindo os dados das cartas --------
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // -------- Comparações --------
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           populacao1 > populacao2 ? 1 : 2,
           populacao1 > populacao2 ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n",
           area1 > area2 ? 1 : 2,
           area1 > area2 ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           pib1 > pib2 ? 1 : 2,
           pib1 > pib2 ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 2,
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           densidade1 < densidade2 ? 1 : 2, // menor vence
           densidade1 < densidade2 ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           pibPerCapita1 > pibPerCapita2 ? 1 : 2,
           pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           superPoder1 > superPoder2 ? 1 : 2,
           superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
