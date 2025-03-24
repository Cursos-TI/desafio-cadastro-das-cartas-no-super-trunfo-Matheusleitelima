
#include <stdio.h>

int main() {
    char estado1;
    char codcarta1[4];
    char nomecidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int nturisticos1;
    float pibpercapita1;
    float densidadepopulacional1;

    char estado2;
    char codcarta2[4];
    char nomecidade2[20];
    unsigned long int  populacao2;
    float area2, pib2;
    int nturisticos2;
    float pibpercapita2;
    float densidadepopulacional2;


    printf("Carta 1 \n");

    printf("Digite o estado (Obs: inicial deve conter 1 letra de A a H) da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta 1 (3 digitos com uma letra): ");
    scanf("%3s", codcarta1);

    printf("Digite nome da cidade da carta 1: ");
    scanf(" %19[^\n]", nomecidade1);
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &nturisticos1);

    pibpercapita1 = (float)(pib1 / populacao1);
    densidadepopulacional1 = (float)(populacao1 / area1);
    float densidadeinvertida1 = 1 / densidadepopulacional1; //dividir a 1 pela densidade
    float superpoder1 = (float)(populacao1 + area1 + pib1 + nturisticos1 + pibpercapita1 + densidadeinvertida1);





    printf("\nCarta 2\n");

    printf("Digite o estado (Obs: inicial deve conter 1 letra de A a H) da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 (3 digitos com uma letra): ");
    scanf("%3s", codcarta2);

    printf("Digite nome da cidade da carta 2: ");
    scanf(" %19[^\n]", nomecidade2);

    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &nturisticos2);

    pibpercapita2 = (float)(pib2 / populacao2);
    densidadepopulacional2 = (float)(populacao2 / area2);
    float densidadeinvertida2 = 1 / densidadepopulacional2;
    float superpoder2 = (float) (populacao2 + area2 + pib2 + nturisticos2 + pibpercapita2 + densidadeinvertida2);





    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codcarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", nturisticos1);
    printf("Densidade populacional da carta 1: %2.f \n", densidadepopulacional1);
    printf("PIB per Capita da carta 1: %.2f reais \n", pibpercapita1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", nturisticos2);
    printf("Densidade populacional da carta 2: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita da carta 2: %.2f reais \n", pibpercapita2);



    int opcmenu;

    printf("Comaprações \n");
    printf("1 - População \n");
    printf("2 - Aréa \n");
    printf("3 - Densidade Populacional \n");
    printf("4 - Pib Per capita \n");
    printf("Escolha quais atributos deseja comparar: \n");
    scanf("%d", &opcmenu);
    // Comparações

    if (opcmenu == 1){
            printf("Atributo: População \n");
        if (populacao1 > populacao2){
            printf("Carta 1 ganhou com %lu", populacao1);
        }else{
            printf("Carta 2 ganhou com %lu", populacao2);
        }
    }


    if (opcmenu == 2){
            printf("Atributo: Area \n");
        if (area1 > area2){
            printf("Carta 1 ganhou com %f", area1);
        }else{
            printf("Carta 2 ganhou com %f", area2);
        }
    }


    if (opcmenu == 3){
            printf("Atributo: Densidade populacional \n");
        if (densidadeinvertida1 < densidadeinvertida2){
            printf("Carta 1 ganhou com %f", densidadeinvertida1);
        }else{
            printf("Carta 2 ganhou com %f", densidadeinvertida2);
        }
    }

     if (opcmenu == 4){
            printf("Atributo: Pib per capita \n");
        if (pibpercapita1 > pibpercapita2){
            printf("Carta 1 ganhou com %f", pibpercapita1);
        }else{
            printf("Carta 2 ganhou com %f", pibpercapita2);
        }
    }



    return 0;
}
