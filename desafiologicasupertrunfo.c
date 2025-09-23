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

    // Calculo de maior população, área, pib e pontos turísticos
    float densidade = (float)populacao / area, densidade2 = (float)populacao2 / area2; // Calculo da densidade populacional tanto da carta 1 quanto da carta 2
    float percapta = pib / (float)populacao, percapta2 = pib2 / (float)populacao2;     // Calculo de pib percapta tanto da carta 1 como da 2
    float supertrunfo = populacao + area + pib + turisticos + percapta + densidade;    // Calculo do super poder da carta 1
    float supertrunfo2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + percapta2 + densidade2;
    float maiordensidade = densidade - densidade2, maiorpibpercapta = percapta - percapta2; // Calculo do super poder da carta 2
    float maiorsupertrunfo = supertrunfo - supertrunfo2, maiorarea = area - area2, maiorpib = pib - pib2;
    int maiorpopulacao = populacao - populacao2;
    int maiorturistico = turisticos - turisticos2;

    printf("\n--------------------------------------------------------------------------------\n");
    printf("***Apresentação carta 1!***\n");
    // Exibir os dados coletados carta 1
    printf("O estado da primeira carta é:%s\n", estado);
    printf("O código da primeira carta: %s\n", codigo);
    printf("A cidade da primeira carta: %s\n", cidade);
    printf("A população da cidade da primeira carta é: %d habitantes\n", populacao);
    printf("A área da cidade da primeira carta é: %fKM²\n", area);
    printf("O pib da cidade da primeira carta é: R$%.2f\n", pib);
    printf("A quantidade de pontos turísticos da primeira carta são:%d pontos turísticos\n", turisticos);
    printf("O pib percapta da primeira cidade é - R$%.2f por habitante\n", percapta);
    printf("A densidade populacional da primeira cidade é - %.2f por KM²\n", densidade);
    printf("O Score do supertrunfo dessa carta foi: %.2f pontos\n", supertrunfo);

    printf("\n--------------------------------------------------------------------------------\n");

    printf("***Apresentação carta 2!***\n");
    // Exibir os dados coletados carta 2
    printf("O estado da segunda carta é:%s\n", estado2);
    printf("O código da segunda carta é: %s\n", codigo2);
    printf("A cidade da segunda carta é: %s\n", cidade2);
    printf("A população da cidade segunda cidade é: %d habitantes \n", populacao2);
    printf("A área da segunda cidade é: %.2fKM²\n", area2);
    printf("O pib da segunda cidade é: R$ %.2f\n", pib2);
    printf("A quantidade de pontos turísticos da segunda cidade são:%d pontos turísticos\n", turisticos2);
    printf("O pib percapta da segunda cidade é R$%.2f por habitante\n", percapta2);
    printf("A densidade populacional da segunda cidade é %.2f por KM²\n", densidade2);
    printf("O Score do supertrunfo dessa carta foi: %.2f pontos \n", supertrunfo2);

    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual a maior população entre as duas cartas?\n");
    if (populacao > populacao2)
    {
        printf("A população da carta 1 venceu com: %d habitantes a mais\n", maiorpopulacao);
    }
    else
    {
        printf("A população da carta 2 venceu com: %d habitantes a mais\n", maiorpopulacao * -1);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual a maior área entre as duas cartas?\n");
    if (area > area2)
    {
        printf("A área da carta 1 venceucom: %.2f de área a mais\n", maiorarea);
    }
    else
    {
        printf("A área da carta 2 venceu com: %.2f de área a mais\n", maiorarea * -1);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual o maior PIB entre as duas cartas?\n");
    if (pib > pib2)
    {
        printf("O PIB da carta 1 venceu com: R$%.2f de PIB a mais\n", maiorpib);
    }
    else
    {
        printf("O PIB da carta 2 venceu com: R$%.2f de PIB a mais\n", maiorpib * -1);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    printf("Quem tem mais pontos turísticos entre as duas cartas?\n");
    if (turisticos > turisticos2)
    {
        printf("Os pontos turísticos da carta 1 venceu com: %d pontos a mais\n", maiorturistico);
    }
    else
    {
        printf("Os pontos turísticos da carta 2 venceu com: %d pontos a mais\n", maiorturistico * -1);
    }
    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual o maior PIB percapta entre as duas cartas?\n");
    if (percapta > percapta2)
    {
        printf("O PIB percapta da carta 1 venceu com: R$%.2f  a mais\n", maiorpibpercapta);
    }
    else
    {
        printf("O PIB percapta da carta 2 venceu com: R$%.2f  a mais\n", maiorpibpercapta * -1);
    }
    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual a maior densidade demográfica entre as duas cartas?\n");
    if (densidade > densidade2)
    {
        printf("A densidade demográfica da carta 1 venceu com: %.2f pessoas por KM²  a mais\n", maiordensidade);
    }
    else
    {
        printf("A densidade demográfica da carta 2 venceu com: %.2f pessoas por KM²  a mais\n", maiordensidade * -1);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    printf("Qual o maior Supertrunfo entre as duas cartas?\n");
    if (supertrunfo > supertrunfo2)
    {
        printf("O Score da carta 1 venceu com: %.2f pontos a mais\n", maiorsupertrunfo);
    }
    else
    {
        printf("O Score da carta 2 venceu com: %.2f pontos a mais\n", maiorsupertrunfo * -1);
    }

    printf("\n--------------------------------------------------------------------------------\n");
    return 0;
}
