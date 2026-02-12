#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de utilitários

int main(){
    
    //Declaração de dados das Cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5]; //3 caracteres + '\0'
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
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
    scanf(" %lu", &populacao1);
    
    printf("Área (Km²): ");
    scanf(" %f", &area1);
    
    printf("PIB: ");
    scanf(" %f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);


    densidadepop1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / (float) populacao1;
    

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
    scanf(" %lu", &populacao2);
    
    printf("Área (Km²): ");
    scanf(" %f", &area2);
    
    printf("PIB: ");
    scanf(" %f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);


    densidadepop2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;

    printf("\n===========================================\n");
    printf(" SUAS CARTAS FORAM CADASTRADAS COM SUCESSO!\n");
    printf("===========================================\n");


    //exibição da carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    //Cálculo da variável SuperPoder e Inverso da Densidade Populacional
    float inversoDensidadePop1= 1.0 / densidadepop1;
    float inversoDensidadePop2 = 1.0 / densidadepop2;
    float SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + inversoDensidadePop1 + pibpercapita1;
    float SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + inversoDensidadePop2 + pibpercapita2;
    
    char buffer[10];
    getchar(); //consome o '\n' do último scanf
   
    printf("\nDigite qualquer tecla para iniciar a comparação das cartas...\n");
    fgets(buffer, sizeof(buffer), stdin); //espera o usuário digitar algo para continuar
    

    //Comparar duas cartas atributo por atributo (exceto estado, código e nome)
    printf("\n========================\n");
    printf(" COMPARAÇÃO DAS CARTAS!\n");
    printf("========================\n");

    printf("População: Carta 1 (%lu) vs Carta 2 (%lu) -> %s\n", populacao1, populacao2,
        (populacao1 > populacao2) ? "Carta 1 vence!" : 
        (populacao1 < populacao2) ? "Carta 2 vence!" : "Empate!");
    
    printf("Área: Carta 1 (%.2f km²) vs Carta 2 (%.2f km²) -> %s\n", area1, area2,
        (area1 > area2) ? "Carta 1 vence!" : 
        (area1 < area2) ? "Carta 2 vence!" : "Empate!");
          
    printf("PIB: Carta 1 (R$ %.2f) vs Carta 2 (R$ %.2f) -> %s\n", pib1, pib2,
        (pib1 > pib2) ? "Carta 1 vence!" : 
        (pib1 < pib2) ? "Carta 2 vence!" : "Empate!");

    printf("Pontos Turísticos: carta 1 (%d) vs carta 2 (%d) -> %s\n", 
        pontosturisticos1, pontosturisticos2,
        (pontosturisticos1 > pontosturisticos2) ? "Carta 1 vence!" : 
        (pontosturisticos1 < pontosturisticos2) ? "Carta 2 vence!" : "Empate!");
    
    //Para Densidade Populacional, menor valor vence
    printf("Densidade Populacional: carta 1 (%.2f) vs carta 2 (%.2f) -> %s\n", 
        densidadepop1, densidadepop2,
        (densidadepop1 < densidadepop2) ? "Carta 1 vence!" :
        (densidadepop1 > densidadepop2) ? "Carta 2 vence!" : "Empate!");
        
    printf("PIB per capita: carta 1 (R$ %.2f) vs carta 2 (R$ %.2f) -> %s\n",
        pibpercapita1, pibpercapita2,
        (pibpercapita1 > pibpercapita2) ? "Carta 1 vence!" :
        (pibpercapita1 < pibpercapita2) ? "Carta 2 vence!" : "Empate!");
        
    printf("Super Poder: carta 1 (%.2f) vs carta 2 (%.2f) -> %s\n", 
        SuperPoder1, SuperPoder2,
        (SuperPoder1 > SuperPoder2) ? "Carta 1 vence!" :
        (SuperPoder1 < SuperPoder2) ? "Carta 2 vence!" : "Empate!");    
    
    return 0;
}