#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char cidade1[40], cidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    int pib1, pib2;
    int pontos_turistico1, pontos_turistico2;
    float densidade_populacinal1, densidade_populacinal2;
    float pib_per_capita1, pib_per_capita2;

    // Leitura Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Codigo (ex: A01): ");
    scanf(" %s", &codigo_carta1);

    printf("Cidade: ");
    scanf(" %s", &cidade1); 

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%d", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico1);

    //calculo da Densidade Populacinal e pib per capita da carta 1
    densidade_populacinal1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    // Leitura Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf(" %s", &codigo_carta2);

    printf("Cidade: ");
    scanf(" %s", &cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%d", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico2);

    //calculo da Densidade Populacinal e pib per capita da carta 2
    densidade_populacinal2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.d reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turistico1);
    printf("Densidade Populacinal: %2f hab/km²\n", densidade_populacinal1);
    printf("PIB per Capita: %2f reais\n", pib_per_capita1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.d reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turistico2);
    printf("Densidade Populacinal: %2f hab/km²\n", densidade_populacinal2);
    printf("PIB per Capita: %2f reais\n", pib_per_capita2);

    return 0;
}