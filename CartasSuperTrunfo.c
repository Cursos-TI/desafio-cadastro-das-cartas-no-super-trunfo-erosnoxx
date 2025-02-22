#include <stdio.h>

int main() {
    // Declaração de variáveis para os dados da Carta 1
    char state1, code1[3], city1[50];
    unsigned long int population1;
    int touristAttractions1;
    float pib1, area1, popDensity1, pibPerCapita1, superPower1;

    // Declaração de variáveis para os dados da Carta 2
    char state2, code2[3], city2[50];
    unsigned long int population2;
    int touristAttractions2;
    float pib2, area2, popDensity2, pibPerCapita2, superPower2;

    // Entrada de dados para a Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &state1);

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", code1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", city1);

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%lu", &population1);

    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &touristAttractions1);

    printf("\n");

    // Entrada de dados para a Carta 2
    printf("Digite o estado (A-H) da Carta 2: ");
    scanf(" %c", &state2);

    printf("Digite o código da Carta 2 (ex: B03): ");
    scanf("%s", code2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", city2);

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%lu", &population2);

    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &touristAttractions2);

    // Cálculo da Densidade Populacional e PIB per Capita
    popDensity1 = population1 / area1;
    popDensity2 = population2 / area2;

    pibPerCapita1 = pib1 / population1;
    pibPerCapita2 = pib2 / population2;

    // Cálculo do Super Poder
    superPower1 = population1 + area1 + pib1 + touristAttractions1 + pibPerCapita1 + (1.0f / popDensity1);
    superPower2 = population2 + area2 + pib2 + touristAttractions2 + pibPerCapita2 + (1.0f / popDensity2);

    // Exibição das cartas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", city1);
    printf("População: %lu habitantes\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", touristAttractions1);
    printf("Densidade populacional: %.2f hab/km²\n", popDensity1);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPower1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", city2);
    printf("População: %lu habitantes\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", touristAttractions2);
    printf("Densidade populacional: %.2f hab/km²\n", popDensity2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPower2);

    // Comparação das Cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (population1 > population2) ? 1 : 2, (population1 > population2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (touristAttractions1 > touristAttractions2) ? 1 : 2, (touristAttractions1 > touristAttractions2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (popDensity1 < popDensity2) ? 1 : 2, (popDensity1 < popDensity2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPower1 > superPower2) ? 1 : 2, (superPower1 > superPower2));

    return 0;
}
