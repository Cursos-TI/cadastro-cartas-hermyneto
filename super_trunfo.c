#include <stdio.h>
#include <stdlib.h>


int main() {
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char cidade1[40], cidade2[40];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    int pib1, pib2;
    int pontos_turistico1, pontos_turistico2;
    float densidade_populacinal1, densidade_populacinal2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int escolha_de_atributo, escolha_de_atributo2;
    int resultado1, resultado2;

    // Leitura Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Codigo (ex: A01): ");
    scanf(" %s", &codigo_carta1);

    printf("Cidade: ");
    scanf(" %s", &cidade1); 

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em Bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico1);

    //Calculo da Densidade Populacinal e pib per capita da carta 1
    densidade_populacinal1 = populacao1 / area1;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para reais

    //Calculo do Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turistico1 + pib_per_capita1;

    // Leitura Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf(" %s", &codigo_carta2);

    printf("Cidade: ");
    scanf(" %s", &cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em Bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turistico2);

    //calculo da Densidade Populacinal e pib per capita da carta 2
    densidade_populacinal2 = populacao2 / area2;

    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    //Calculo do Super Poder
    super_poder2 = populacao2 + area2 + pib2 + pontos_turistico2 + pib_per_capita2;

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.d reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turistico1);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade_populacinal1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.d reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turistico2);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade_populacinal2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    // Escolha do Atributo
    printf("\n### Super Trunfo: Comparacao de Cartas ###\n\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacinal\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &escolha_de_atributo);

    // Comparação dos atributos escolido
    switch (escolha_de_atributo){
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        resultado1 = pontos_turistico1 > pontos_turistico2 ? 1 : 0;
        break;
    case 5:
        resultado1 = densidade_populacinal1 > densidade_populacinal2 ? 1 : 0;
        break;
    case 6:
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break;
    
    default:
        printf("\nOpçao Incorreta\n");
        break;
    }

    printf("\n### Super Trunfo: Comparacao de Cartas ###\n\n");
    printf("Escolha o segundo atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacinal\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &escolha_de_atributo2);

    if (escolha_de_atributo == escolha_de_atributo2){
        printf("Você escolheu o mesmo atributo\n");  
    }
    
    switch (escolha_de_atributo2){
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        resultado2 = pontos_turistico1 > pontos_turistico2 ? 1 : 0;
        break;
    case 5:
        resultado2 = densidade_populacinal1 > densidade_populacinal2 ? 1 : 0;
        break;
    case 6:
        resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
        break;
    
    default:
        printf("\nOpçao Incorreta\n");
        break;
    }
        if(resultado1 && resultado2) {
        printf("Parabéns! Você venceu.\n");
    }
    else if(resultado1 != resultado2) {
        printf("Empatou!\n");
    }
    else {
        printf("Você perdeu!\n");
    }
    

    return 0;
}