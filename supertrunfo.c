#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilitários
#include <string.h> // Inclui a biblioteca padrão de manipulação de strings

int main(){
    
    //Declaração de dados das Cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5]; //3 caracteres + '\0'
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2;




    printf("===========================================\n");
    printf(" Bem-vindo ao jogo Super Trunfo de Cidades\n");
    printf("===========================================\n");
    
    printf("\nVamos começar cadastrando os dados da sua primeira carta.\n");
    printf("\n---- CADASTRO DA CARTA 1 ----\n");


    //Leitura dos dados da Carta 1
    printf("Estado: ");
    scanf(" %c", &estado1);  //lê um caractere
    
    printf("Código: ");
    scanf(" %4s", codigo1);  //lê a string do código

    getchar(); //Limpa o buffer
    
    printf("Cidade: ");
    fgets(cidade1, 50, stdin);
    
    printf("População: ");
    scanf(" %d", &populacao1);
    
    printf("Área (Km²): ");
    scanf(" %f", &area1);
    
    printf("PIB: ");
    scanf(" %f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);


    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    

    printf("\nCarta 1 cadastrada com sucesso!\n"); //informa o cadastro da primeira carta ao usuário


    printf("\n---- CADASTRO DA CARTA 2 ----\n");
    //Leitura dos dados da Carta 2
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf(" %4s", codigo2);

    getchar(); //Limpa o buffer
    
    printf("Cidade: ");
    fgets(cidade2, 50, stdin);
    
    printf("População: ");
    scanf(" %d", &populacao2);
    
    printf("Área (Km²): ");
    scanf(" %f", &area2);
    
    printf("PIB: ");
    scanf(" %f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);


    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;


    printf("\n===========================================\n");
    printf(" SUAS CARTAS FORAM CADASTRADAS COM SUCESSO!\n");
    printf("===========================================\n");


    //exibição da carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);

    //exibição da carta 2
    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);


    return 0;
}