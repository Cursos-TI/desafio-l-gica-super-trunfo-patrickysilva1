#include <stdio.h>

int main()
{
    // declarando variáveis das cartas cadastradas

    // primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // recebendo dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // calculando densidade populacional e PIB per capita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // Convertendo PIB para reais

    // recebendo dados da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // calculando densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // Convertendo PIB para reais

    // exibindo dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // comparação das cartas
    int escolha;
    printf("\nEscolha o atributo para comparar (1 - População, 2 - Área, 3 - PIB, 4 - Densidade Populacional, 5 - PIB per Capita): ");
    scanf("%d", &escolha);

    if (escolha == 1)
    { // comparar população
        if (populacao1 > populacao2)
        {
            printf("\nCarta 1 venceu com maior população!\n");
        }
        else if (populacao2 > populacao1)
        {
            printf("\nCarta 2 venceu com maior população!\n");
        }
        else
        {
            printf("\nEmpate, as populações são iguais!\n");
        }
    }
    else if (escolha == 2)
    { // comparar área
        if (area1 > area2)
        {
            printf("\nCarta 1 venceu com maior área!\n");
        }
        else if (area2 > area1)
        {
            printf("\nCarta 2 venceu com maior área!\n");
        }
        else
        {
            printf("\nEmpate, as áreas são iguais!\n");
        }
    }
    else if (escolha == 3)
    { // comparar PIB
        if (pib1 > pib2)
        {
            printf("\nCarta 1 venceu com maior PIB!\n");
        }
        else if (pib2 > pib1)
        {
            printf("\nCarta 2 venceu com maior PIB!\n");
        }
        else
        {
            printf("\nEmpate, os PIBs são iguais!\n");
        }
    }
    else if (escolha == 4)
    { // comparar densidade populacional
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("\nCarta 1 venceu com maior densidade populacional!\n");
        }
        else if (densidadePopulacional2 > densidadePopulacional1)
        {
            printf("\nCarta 2 venceu com maior densidade populacional!\n");
        }
        else
        {
            printf("\nEmpate, as densidades populacionais são iguais!\n");
        }
    }
    else if (escolha == 5)
    { // comparar PIB
        if (pibPerCapita1 > pibPerCapita2)
        {
            printf("\nCarta 1 venceu com maior PIB per capita!\n");
        }
        else if (pibPerCapita2 > pibPerCapita1)
        {
            printf("\nCarta 2 venceu com maior PIB per capita!\n");
        }
        else
        {
            printf("\nEmpate, os PIBs per capita são iguais!\n");
        }
    }
    else
    {
        printf("\nEscolha inválida!\n");
    }

    return 0;
}
