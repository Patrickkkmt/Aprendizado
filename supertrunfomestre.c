#include <stdio.h>

int main()
{
    char estado[50], estado2[50], codigo[50], codigo2[50], cidade[50], cidade2[50]; // nome do estado, código da carta e nome da cidade, tanto da carta 1 quanto da carta 2;
    int populacao, turisticos, populacao2, turisticos2;                             // população em habitantes e número de pontos turísticos,tanto da carta 1 quanto da carta 2;
    float area, pib, area2, pib2;                                                   // Área da cidade em km² e pib em reais, tanto da carta 1 quanto da carta 2;

    printf("***Vamos para o cadastro da primeira carta!!!***\n");
    printf("Qual nome do estado?\n");
    scanf("%s", estado);

    printf("Qual o código da carta?\n");
    scanf("%s", codigo);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos há na cidade?\n");
    scanf("%d", &turisticos);

    printf("\n--------------------------------------------------------------------------------\n");
    printf("***Vamos para o cadastro da segunda carta!!!***\n");
    printf("Qual nome do segundo estado?\n");
    scanf("%s", estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    printf("Qual o pib dessa cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos há na cidade?\n");
    scanf("%d", &turisticos2);

    float densidade = populacao / area, densidade2 = populacao2 / area2;                   // Calculo da densidade populacional tanto da carta 1 quanto da carta 2
    float percapta = pib / populacao, percapta2 = pib2 / populacao2;                       // Calculo de pib percapta tanto da carta 1 como da 2
    float supertrunfo = populacao + area + pib + turisticos + percapta + densidade;        // Calculo do super poder da carta 1
    float supertrunfo2 = populacao2 + area2 + pib2 + turisticos2 + percapta2 + densidade2; // Calculo do super poder da carta 2

    printf("\n--------------------------------------------------------------------------------\n");
    printf("***Apresentação carta 1!***\n");
    // Exibir os dados coletados carta 1
    printf("O estado da primeira carta é:%s\n", estado);
    printf("O código da primeira carta: %s\n", codigo);
    printf("A cidade da primeira carta: %s\n", cidade);
    printf("A população da cidade da primeira carta é: %d habitantes > %d\n", populacao, populacao > populacao2);
    printf("A área da cidade da primeira carta é: %fm² > %d\n", area, area > area2);
    printf("O pib da cidade da primeira carta é: R$%.2f > %d\n", pib, pib > pib2);
    printf("A quantidade de pontos turísticos da primeira carta é:%d > %d\n", turisticos, turisticos > turisticos2);
    printf("O pib percapta da primeira cidade é - %.2f > %d \n", percapta, percapta > percapta2);
    printf("A densidade populacional da primeira cidade é - %.2f > %d\n", densidade, densidade > densidade2);
    printf("O Score do supertrunfo dessa carta foi: %.2f\n", supertrunfo);

    printf("\n--------------------------------------------------------------------------------\n");

    printf("***Apresentação carta 2!***\n");
    // Exibir os dados coletados carta 2
    printf("O estado da segunda carta é:%s\n", estado2);
    printf("O código da segunda carta é: %s\n", codigo2);
    printf("A cidade da segunda carta é: %s\n", cidade2);
    printf("A população da cidade segunda cidade é: %d habitantes > %d\n", populacao2, populacao < populacao2);
    printf("A área da segunda cidade é: %.2fm² > %d\n", area2, area < area2);
    printf("O pib da segunda cidade é: R$ %.2f > %d\n", pib2, pib < pib2);
    printf("A quantidade de pontos turísticos da segunda cidade é:%d > %d\n", turisticos2, turisticos < turisticos2);
    printf("O pib percapta da segunda cidade é %.2f > %d\n", percapta2, percapta < percapta2);
    printf("A densidade populacional da segunda cidade é %.2f > %d\n", densidade2, densidade < densidade2);
    printf("O Score do supertrunfo dessa carta foi: %.2f \n", supertrunfo2);

    printf("\n--------------------------------------------------------------------------------\n");

    printf("O Score da carta 1 foi %.2f e da carta 2 foi %.2f , Se a carta 1 for a vencedora dará 1 se não 0 > %d", supertrunfo, supertrunfo2, supertrunfo > supertrunfo2);
}
