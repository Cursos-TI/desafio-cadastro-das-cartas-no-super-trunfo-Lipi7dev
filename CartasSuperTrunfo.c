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
    int propriedade;
   
    



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
    

    //Comparacão de cartas

    Printf("1 População\n");
    printf("2 Área\n");
    printf("3 pib\n");
    printf("4 Quantidade de pontos turísticos\n");
    printf("5 Densidade populacional\n");
    printf("6 Pib percapita\n");
    
    
    //Sistema de switch
    
    printf("Escolha uma propriedade para comparar\n");
    scanf("%d",&propriedade);

    switch (propriedade)
    {
    case 1:
        printf ("Você escolheu população\n");
        if (populacao1 > populacao2){
            printf("carta venceu\n");
            }else if (populacao1 == populacao2){
            printf("Impate");
            } else{ 
            printf("Carta 2 venceu");
            }
            break;


    case 2:
        printf("Você escolheu área\n");
        if (area1 > area2){
            printf("carta 1 ganhou");
        }else if(area1 == area2){ 
            printf("Empate");
        }else {
           printf("carta 2 ganhou");
        }
         break;


    case 3:
        printf("Você escolheu pib");
        if(pib1 > pib2){
            printf("Carta 1 ganhou");
        } else if(pib1 == pib2){
            printf("Empate");
        }else{
            printf("Carta 2 venceu");
        }
        break;


    case 4:
        printf("Você escolheu quantidade de pontos turisticos\n");
        if(pontos1 > pontos2){
            printf("carta 1 venceu");
        }else if(pontos1 == pontos2){
            printf("Empate");
        }else{
            printf("carta 2 venceu");
        }
        break;


    case 5:


        printf("Você escolheu pib percapita\n");
        if (pibpercapita1 > pibpercapita2){
            printf("Carta 1 venceu");
        }else if(pibpercapita1 == pibpercapita2){
            printf("Empate");
        }else{
            printf("Caarta 2 venceu");;
        }
        break;


    case 6:
        printf("Você escolheu densidade populacional\n");
        if (dpopulacional1 > dpopulacional2){
            printf("carta 2 ganhou");
        }else if (dpopulacional1 == dpopulacional2){
            printf("empate");
        }else{
            printf("carta 1 ganhou");
        }
        break;    
    
    
    default:
        printf("Opção invalida");

}
}
    








    





