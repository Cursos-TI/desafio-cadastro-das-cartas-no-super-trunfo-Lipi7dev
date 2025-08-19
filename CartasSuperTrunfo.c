#include <stdio.h>



int main(){

    char estado [20];
    char codigo [20];
    char cidade [20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float dpopulacional1, dpopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    int resultado1, resultado2;
    



    // Entrada de dados da carta 1

    printf("Digite o nome de um estado\n");
    scanf("%s", estado);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome de uma cidade\n");
    scanf("%s", cidade);

    printf("Digite o numero da populaçao do estado\n");
    scanf("%ld", &populacao1);

    printf("Digite o tamanho da área\n");
    scanf("%f", &area1);

    printf("Digite o Pib do Estado\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos1);

    dpopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (float) populacao1 / pib1;

    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + pibpercapita1 / dpopulacional1; 



    //Saida de dados da carta 1

    printf("Carta 1\n");

    printf("Estado: %s\n",estado);
    printf("Código: %s\n", codigo);
    printf("População: %ld\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", dpopulacional1);
    printf("Pib percapita: %.2f\n", pibpercapita1);
    printf("Super poder: %f\n", superpoder1);


    //Entrada de Dados carta 2

    printf("Digite o nome de um estado\n");
    scanf("%s", estado);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome de uma cidade\n");
    scanf("%s", cidade);

    printf("Digite o numero da populaçao do estado\n");
    scanf("%ld", &populacao2);

    printf("Digite o tamanho da área\n");
    scanf("%f", &area2);

    printf("Digite o Pib do Estado\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos2);

    dpopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (float) populacao2 / pib2;

    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpercapita2 / dpopulacional2;
 

    //Saida de dados carta 2

    printf("Carta 2\n");

    printf("Estado: %s\n",estado);
    printf("Código: %s\n", codigo);
    printf("População: %ld\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", dpopulacional2);
    printf("Pib percapita: %.2f\n", pibpercapita2);
    printf("Super poder: %f\n", superpoder2);

    //Comparacão de cartas

    if (superpoder1 > superpoder2) {printf("Carta 1 venceu");
    }
    else{printf("carta 2 venceu");
    
    }
 



    








    return 0; 


}


