#include <stdio.h>

int main(){
    char estado[50]; //nome do estado
    char codigo[50]; //código da carta
    char cidade[50]; //nome da cidade
    int populacao, turisticos; //população em habitantes e número de pontos turísticos 
    float area, pib; //em km² e pib em reais
    
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

    // Exibir os dados coletados
    printf("O estado é:%s\n",estado);
    printf("O código da carta é: %s\n",codigo);
    printf("A cidade é: %s\n",cidade);
    printf("A população da cidade é: %d habitantes\n",populacao);
    printf("A área da cidade é: %fm²\n",area);
    printf("O pib da cidade é: R$%f\n",pib);
    printf("A quantidade de pontos turísticos da cidade é:%d\n",turisticos);

    //futuramente armazenar esses dados em um banco de dados ou arquivo para fazer o jogo

    return 0;
}
