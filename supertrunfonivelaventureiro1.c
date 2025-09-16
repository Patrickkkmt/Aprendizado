#include <stdio.h>

int main(){
    char estado[50], estado2[50],codigo[50],codigo2[50],cidade[50],cidade2[50]; //nome do estado, código da carta e nome da cidade, tanto da carta 1 quanto da carta 2;
    int populacao, turisticos,populacao2, turisticos2; //população em habitantes e número de pontos turísticos,tanto da carta 1 quanto da carta 2;
    float area, pib, area2, pib2; //Área da cidade em km² e pib em reais, tanto da carta 1 quanto da carta 2;
  

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

    float  densidade = populacao/area, densidade2 = populacao2/area2; //Calculo da densidade populacional tanto da carta 1 quanto da carta 2
    float  percapta = pib/populacao, percapta2 = pib2/populacao2; //Calculo de pib percapta tanto da carta 1 como da 2

    printf("\n--------------------------------------------------------------------------------\n");
    printf("***Apresentação carta 1!***\n");
 // Exibir os dados coletados carta 1
    printf("O estado da primeira carta é:%s\n",estado);
    printf("O código da primeira carta: %s\n",codigo);
    printf("A cidade da primeira carta: %s\n",cidade);
    printf("A população da cidade da primeira carta é: %d habitantes\n",populacao);
    printf("A área da cidade da primeira carta é: %fm²\n",area);
    printf("O pib da cidade da primeira carta é: R$%.2f\n",pib);
    printf("A quantidade de pontos turísticos da primeira carta é:%d\n",turisticos);
    printf("O pib percapta da primeira cidade é - %.2f \n",percapta);
    printf("A densidade populacional da primeira cidade é - %.2f \n",densidade);

    printf("\n--------------------------------------------------------------------------------\n");

    printf("***Apresentação carta 2!***\n");
    // Exibir os dados coletados carta 2
    printf("O estado da segunda carta é:%s\n",estado2);
    printf("O código da segunda carta é: %s\n",codigo2);
    printf("A cidade da segunda carta é: %s\n",cidade2);
    printf("A população da cidade segunda cidade é: %d habitantes\n",populacao2);
    printf("A área da segunda cidade é: %.2fm²\n",area2);
    printf("O pib da segunda cidade é: R$ %.2f\n",pib2);
    printf("A quantidade de pontos turísticos da segunda cidade é:%d\n",turisticos2);
    printf("O pib percapta da segunda cidade é %.2f \n",percapta2);
    printf("A densidade populacional da segunda cidade é %.2f \n",densidade2);
}
