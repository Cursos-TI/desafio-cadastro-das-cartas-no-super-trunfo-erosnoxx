#include <stdio.h>

int main() {
    char state1, code1[3], city1[50];
    int population1, touristAttractions1;
    float pib1, area1;

    char state2, code2[3], city2[50];
    int population2, touristAttractions2;
    float pib2, area2;

    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &state1);

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", code1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", city1);

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &population1);

    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &touristAttractions1);

    printf("\n");

    printf("Digite o estado (A-H) da Carta 2: ");
    scanf(" %c", &state2);

    printf("Digite o código da Carta 2 (ex: B03): ");
    scanf("%s", code2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", city2);

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &population2);

    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &touristAttractions2);

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", city1);
    printf("População: %d habitantes\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", touristAttractions1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Cidade: %s\n", city2);
    printf("População: %d habitantes\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", touristAttractions2);


    return 0;
}