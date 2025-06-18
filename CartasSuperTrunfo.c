#include <stdio.h>

// Definindo SUPER TRUNFO
#define TOTAL_CARTAS 2

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado[TOTAL_CARTAS];
    char codigo[TOTAL_CARTAS][4]; // Ex: "A01" + '\0'
    char nomeCidade[TOTAL_CARTAS][100];
    int populacao[TOTAL_CARTAS];
    float area[TOTAL_CARTAS];
    float pib[TOTAL_CARTAS];
    int pontosTuristicos[TOTAL_CARTAS];

    // Leitura dos dados
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &estado[i]); // Espaço antes de %c para ignorar '\n'

        printf("Código da Carta (ex: A01): ");
        scanf("%s", codigo[i]);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade[i]); // Lê até a nova linha, inclusive espaços

        printf("População: ");
        scanf("%d", &populacao[i]);

        printf("Área (em km²): ");
        scanf("%f", &area[i]);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib[i]);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos[i]);

        printf("\n");
    }

    // Exibição dos dados
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", nomeCidade[i]);
        printf("População: %d\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos[i]);
        printf("\n");
    }

    return 0;
}
