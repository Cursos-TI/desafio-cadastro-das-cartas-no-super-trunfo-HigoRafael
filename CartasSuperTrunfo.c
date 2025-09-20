#include <stdio.h>
#include <string.h>

int main() {
    // -------- Carta 1 --------
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // -------- Carta 2 --------
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro das cartas (já simplificado)
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1; // cálculo da densidade

    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do Pais: ");
    scanf(" %[^\n]", pais2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2; // cálculo da densidade

    // -------- Menu --------
    int opcao;
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n=== Comparacao de Cartas ===\n");

    switch (opcao) {
        case 1: // População
            printf("Comparando Populacao:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Area:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes de reais\n", pais1, pib1);
            printf("%s: %.2f bilhoes de reais\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d pontos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida: menor vence)
            printf("Comparando Densidade Demografica:\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade)\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade)\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 5.\n");
            break;
    }

    return 0;
}
