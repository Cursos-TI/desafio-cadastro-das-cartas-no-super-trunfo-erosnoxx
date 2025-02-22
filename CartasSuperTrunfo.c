#include <stdio.h>

int main() {
    // Declaração de variáveis para os dados da Carta 1
    char state1, code1[3], city1[50];
    int population1, touristAttractions1;
    float pib1, area1;

    // Declaração de variáveis para os dados da Carta 2
    char state2, code2[3], city2[50];
    int population2, touristAttractions2;
    float pib2, area2;

    // Entrada de dados para a Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &state1);  // Lê o estado da Carta 1

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", code1);  // Lê o código da Carta 1

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", city1);  // Lê o nome da cidade da Carta 1 (permitindo espaços)

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &population1);  // Lê a população da Carta 1

    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f", &area1);  // Lê a área da Carta 1

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);  // Lê o PIB da Carta 1

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &touristAttractions1);  // Lê o número de pontos turísticos da Carta 1

    printf("\n");  // Linha em branco para separar a entrada das duas cartas

    // Entrada de dados para a Carta 2
    printf("Digite o estado (A-H) da Carta 2: ");
    scanf(" %c", &state2);  // Lê o estado da Carta 2

    printf("Digite o código da Carta 2 (ex: B03): ");
    scanf("%s", code2);  // Lê o código da Carta 2

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", city2);  // Lê o nome da cidade da Carta 2 (permitindo espaços)

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &population2);  // Lê a população da Carta 2

    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f", &area2);  // Lê a área da Carta 2

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);  // Lê o PIB da Carta 2

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &touristAttractions2);  // Lê o número de pontos turísticos da Carta 2

    printf("\n===== CARTA 1 =====\n");  // Exibe o título da Carta 1
    printf("Estado: %c\n", state1);  // Exibe o estado da Carta 1
    printf("Código: %s\n", code1);  // Exibe o código da Carta 1
    printf("Cidade: %s\n", city1);  // Exibe o nome da cidade da Carta 1
    printf("População: %d habitantes\n", population1);  // Exibe a população da Carta 1
    printf("Área: %.2f km²\n", area1);  // Exibe a área da Carta 1
    printf("PIB: R$ %.2f\n", pib1);  // Exibe o PIB da Carta 1
    printf("Pontos turísticos: %d\n", touristAttractions1);  // Exibe o número de pontos turísticos da Carta 1

    printf("\n===== CARTA 2 =====\n");  // Exibe o título da Carta 2
    printf("Estado: %c\n", state2);  // Exibe o estado da Carta 2
    printf("Código: %s\n", code2);  // Exibe o código da Carta 2
    printf("Cidade: %s\n", city2);  // Exibe o nome da cidade da Carta 2
    printf("População: %d habitantes\n", population2);  // Exibe a população da Carta 2
    printf("Área: %.2f km²\n", area2);  // Exibe a área da Carta 2
    printf("PIB: R$ %.2f\n", pib2);  // Exibe o PIB da Carta 2
    printf("Pontos turísticos: %d\n", touristAttractions2);  // Exibe o número de pontos turísticos da Carta 2

    return 0;  // Finaliza o programa com sucesso
}
