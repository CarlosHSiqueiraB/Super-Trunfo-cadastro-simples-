#include <stdio.h>
 
int main() {
    char estado;
    char codigo[3];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosT;
    printf("Digite a letra do estado: \n"); //Entre A e H
    scanf("%c", &estado);
    printf("Digite o código da carta: \n"); //ex: A01, B02
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n"); //ex: Rio de Janeiro
    scanf("%s", &cidade);
    printf("Digite a quantidade de pessoas que habitam a cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o produto interno bruto da cidade: \n"); //PIB da cidade (Bilhões)
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosT);
    
    float densidadep = area/populacao;
    float pibpercapta = pib/populacao;
    
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosT);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep);
    printf("PIB per Capita: %.2f reais \n", pibpercapta);
    
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosT1;
    printf("Digite a letra do estado: \n"); //Entre A e H
    scanf("%c", &estado1);
    printf("Digite o código da carta: \n"); //ex: A01, B02
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n"); //ex: Rio de Janeiro
    scanf("%s", &cidade1);
    printf("Digite a quantidade de pessoas que habitam a cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);
    printf("Digite o produto interno bruto da cidade: \n"); //PIB da cidade (Bilhões)
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosT1);
    
    float densidadep1 = area/populacao;
    float pibpercapta1 = pib/populacao;
    
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosT1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep1);
    printf("PIB per Capita: %.2f reais \n", pibpercapta1);
    return 0;
}
