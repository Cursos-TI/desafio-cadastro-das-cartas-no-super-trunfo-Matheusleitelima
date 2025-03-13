#include <stdio.h>

int main() {
    char estado1;
    char codcarta1[4]; 
    char nomecidade1[20];
    int populacao1;
    float area1, pib1;
    int nturisticos1;

    char estado2;
    char codcarta2[4];
    char nomecidade2[20];
    int populacao2;
    float area2, pib2;
    int nturisticos2;

    printf("Carta 1 \n");

    printf("Digite o estado (Obs: inicial deve conter 1 letra de A a H) da carta 1: ");
    scanf(" %c", &estado1);  

    printf("Digite o codigo da carta 1 (3 digitos com uma letra): ");
    scanf("%3s", codcarta1); 

    printf("Digite nome da cidade da carta 1: ");
    scanf(" %19[^\n]", nomecidade1); 
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &nturisticos1);  

    printf("\nCarta 2\n");

    printf("Digite o estado (Obs: inicial deve conter 1 letra de A a H) da carta 2: ");
    scanf(" %c", &estado2);  

    printf("Digite o codigo da carta 2 (3 digitos com uma letra): ");
    scanf("%3s", codcarta2);

    printf("Digite nome da cidade da carta 2: ");
    scanf(" %19[^\n]", nomecidade2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &nturisticos2); 

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codcarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", nturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", nturisticos2);

    return 0;
}
