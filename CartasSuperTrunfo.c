#include <stdio.h>

// Função para exibir menu inicial
void mostrarMenu() {
    printf("\n===== MENU DE ATRIBUTOS =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha um atributo: ");
}

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

    // Cadastro das cartas
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
    densidade1 = populacao1 / area1;

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
    densidade2 = populacao2 / area2;

    // -------- Escolha dos atributos --------
    int atributo1, atributo2;

    // Primeiro atributo
    mostrarMenu();
    scanf("%d", &atributo1);

    // Segundo atributo (dinâmico: não pode repetir o primeiro)
    printf("\n===== MENU DE ATRIBUTOS (2ª escolha) =====\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) { // não mostra o atributo já escolhido
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Numero de Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Escolha um segundo atributo: ");
    scanf("%d", &atributo2);

    // -------- Comparação --------
    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;
    char nomeA[30], nomeB[30];

    // Função auxiliar: pegar valores do atributo escolhido
    switch (atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; sprintf(nomeA, "Populacao"); break;
        case 2: valor1A = area1; valor2A = area2; sprintf(nomeA, "Area"); break;
        case 3: valor1A = pib1; valor2A = pib2; sprintf(nomeA, "PIB"); break;
        case 4: valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; sprintf(nomeA, "Pontos Turisticos"); break;
        case 5: valor1A = densidade1; valor2A = densidade2; sprintf(nomeA, "Densidade Demografica"); break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; sprintf(nomeB, "Populacao"); break;
        case 2: valor1B = area1; valor2B = area2; sprintf(nomeB, "Area"); break;
        case 3: valor1B = pib1; valor2B = pib2; sprintf(nomeB, "PIB"); break;
        case 4: valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; sprintf(nomeB, "Pontos Turisticos"); break;
        case 5: valor1B = densidade1; valor2B = densidade2; sprintf(nomeB, "Densidade Demografica"); break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    // Comparação atributo 1
    printf("\n=== Comparacao de Atributos ===\n");
    printf("Atributo 1: %s\n", nomeA);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor1A, pais2, valor2A);
    if (atributo1 == 5) { // densidade (menor vence)
        (valor1A < valor2A) ? printf("Vencedor: %s (menor densidade)\n", pais1) :
        (valor2A < valor1A) ? printf("Vencedor: %s (menor densidade)\n", pais2) :
                              printf("Empate!\n");
    } else {
        (valor1A > valor2A) ? printf("Vencedor: %s\n", pais1) :
        (valor2A > valor1A) ? printf("Vencedor: %s\n", pais2) :
                              printf("Empate!\n");
    }

    // Comparação atributo 2
    printf("\nAtributo 2: %s\n", nomeB);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor1B, pais2, valor2B);
    if (atributo2 == 5) { // densidade (menor vence)
        (valor1B < valor2B) ? printf("Vencedor: %s (menor densidade)\n", pais1) :
        (valor2B < valor1B) ? printf("Vencedor: %s (menor densidade)\n", pais2) :
                              printf("Empate!\n");
    } else {
        (valor1B > valor2B) ? printf("Vencedor: %s\n", pais1) :
        (valor2B > valor1B) ? printf("Vencedor: %s\n", pais2) :
                              printf("Empate!\n");
    }

    // Soma dos atributos
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;
    printf("\n=== Resultado Final (Soma dos Atributos) ===\n");
    printf("%s: %.2f | %s: %.2f\n", pais1, soma1, pais2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor Final: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("Vencedor Final: %s\n", pais2);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}
