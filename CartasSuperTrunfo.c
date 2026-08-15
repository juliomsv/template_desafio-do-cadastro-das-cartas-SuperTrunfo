#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- CADASTRO DA CARTA 1 ---
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado (A a H): ");
    fflush(stdout);
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    fflush(stdout);
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    fflush(stdout);
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    fflush(stdout);
    scanf(" %d", &populacao1);

    printf("Digite a Área (em km²): ");
    fflush(stdout);
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    fflush(stdout);
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    fflush(stdout);
    scanf(" %d", &pontosTuristicos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o Estado (A a H): ");
    fflush(stdout);
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    fflush(stdout);
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    fflush(stdout);
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    fflush(stdout);
    scanf(" %d", &populacao2);

    printf("Digite a Área (em km²): ");
    fflush(stdout);
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    fflush(stdout);
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    fflush(stdout);
    scanf(" %d", &pontosTuristicos2);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n====================================\n");
    printf("         CARTAS CADASTRADAS         \n");
    printf("====================================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}