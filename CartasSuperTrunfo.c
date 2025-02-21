#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CARTAS 64

typedef struct 
{
    char estado[50];
    char codigo_da_carta[3];
    char cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
} CartaSuperTrunfo;

void exibir_carta(CartaSuperTrunfo carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Codigo: %s\n", carta.codigo_da_carta);
    printf("Cidade: %s\n", carta.cidade); 
    printf("Estado: %s\n", carta.estado);
    printf("Populacao: %d habitantes\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area_km2);
    printf("PIB: %.2f milhoes\n", carta.pib); 
    printf("Pontos turisticos: %d\n", carta.pontos_turisticos);
    printf("---------------------------\n");
}

int main() { 

    // Criando algumas cartas para o jogo

    // SAO PAULO - Brasil
    CartaSuperTrunfo cartas[MAX_CARTAS];
    
    strcpy(cartas[0].estado, "Sao Paulo");
    strcpy(cartas[0].codigo_da_carta, "A1");
    strcpy(cartas[0].cidade, "São Paulo");
    cartas[0].populacao = 12300000;
    cartas[0].area_km2 = 1521.11;
    cartas[0].pib = 699.28;
    cartas[0].pontos_turisticos = 15;

    exibir_carta(cartas[0]);

    // Bragrança Paulista - Brasil

    strcpy(cartas[0].estado, "São Paulo");
    strcpy(cartas[0].codigo_da_carta, "A2");
    strcpy(cartas[0].cidade, "Bragança Paulista");
    cartas[0].populacao = 184634;
    cartas[0].area_km2 = 512.584;
    cartas[0].pib = 7.954300;
    cartas[0].pontos_turisticos = 13;

    exibir_carta(cartas[0]);

    // Campinas - Brasil

    strcpy(cartas[0].estado, "São Paulo");
    strcpy(cartas[0].codigo_da_carta, "A3");
    strcpy(cartas[0].cidade, "Campinas");
    cartas[0].populacao = 1139047;
    cartas[0].area_km2 = 794.571;
    cartas[0].pib = 72.946744;
    cartas[0].pontos_turisticos = 19;

    exibir_carta(cartas[0]);

    // Campos do Jordão - Brasil

    strcpy(cartas[0].estado, "São Paulo");
    strcpy(cartas[0].codigo_da_carta, "A4");
    strcpy(cartas[0].cidade, "Campos do Jordão");
    cartas[0].populacao = 46974;
    cartas[0].area_km2 = 290.52;
    cartas[0].pib = 1.27636374;
    cartas[0].pontos_turisticos = 18;

    exibir_carta(cartas[0]);

    // Balneário Camboriú - Brasil

    strcpy(cartas[0].estado, "Santa Catarina");
    strcpy(cartas[0].codigo_da_carta, "B1");
    strcpy(cartas[0].cidade, "Balneário Camboriú");
    cartas[0].populacao = 139155;
    cartas[0].area_km2 = 45.214;
    cartas[0].pib = 6.212892;
    cartas[0].pontos_turisticos = 20;

    exibir_carta(cartas[0]);

    // Chapecó - Brasil

    strcpy(cartas[0].estado, "Santa Catarina");
    strcpy(cartas[0].codigo_da_carta, "B2");
    strcpy(cartas[0].cidade, "Chapecó");
    cartas[0].populacao = 275959;
    cartas[0].area_km2 = 624.0846;
    cartas[0].pib = 13.6000230;
    cartas[0].pontos_turisticos = 15;

    exibir_carta(cartas[0]);
  
    // Criciúma - Brasil

    strcpy(cartas[0].estado, "Santa Catarina");
    strcpy(cartas[0].codigo_da_carta, "B3");
    strcpy(cartas[0].cidade, "Criciúma");
    cartas[0].populacao = 225281;
    cartas[0].area_km2 = 235.628;
    cartas[0].pib = 10.063804959;
    cartas[0].pontos_turisticos = 15;

    exibir_carta(cartas[0]);

    // Catanduvas - Brasil

    strcpy(cartas[0].estado, "Santa Catarina");
    strcpy(cartas[0].codigo_da_carta, "B4");
    strcpy(cartas[0].cidade, "Catanduvas");
    cartas[0].populacao = 10566;
    cartas[0].area_km2 = 198.033;
    cartas[0].pib = 258.069904;
    cartas[0].pontos_turisticos = 8;

    exibir_carta(cartas[0]);

    // Rio de Janeiro - Brasil

    strcpy(cartas[0].estado, "Rio de Janeiro");
    strcpy(cartas[0].codigo_da_carta, "C1");
    strcpy(cartas[0].cidade, "Rio de Janeiro");
    cartas[0].populacao = 6211223;
    cartas[0].area_km2 = 1.200329;
    cartas[0].pib = 331.27990203;
    cartas[0].pontos_turisticos = 25;

    exibir_carta(cartas[0]);

    // Angra dos Reis - Brasil

    strcpy(cartas[0].estado, "Rio de Janeiro");
    strcpy(cartas[0].codigo_da_carta, "C2");
    strcpy(cartas[0].cidade, "Angra dos Reis");
    cartas[0].populacao = 179120;
    cartas[0].area_km2 = 813.420;
    cartas[0].pib = 11.19424423;
    cartas[0].pontos_turisticos = 20;

    exibir_carta(cartas[0]);
    
    // Arraial do Cabo - Brasil

    strcpy(cartas[0].estado, "Rio de Janeiro");
    strcpy(cartas[0].codigo_da_carta, "C3");
    strcpy(cartas[0].cidade, "Arraial do Cabo");
    cartas[0].populacao = 30827;
    cartas[0].area_km2 = 152.305;
    cartas[0].pib = 328.840250;
    cartas[0].pontos_turisticos = 14;

    exibir_carta(cartas[0]);

    // Cabo Frio

    strcpy(cartas[0].estado, "Rio de Janeiro");
    strcpy(cartas[0].codigo_da_carta, "C4");
    strcpy(cartas[0].cidade, "Cabo Frio");
    cartas[0].populacao = 222161;
    cartas[0].area_km2 = 413.449;
    cartas[0].pib = 12.35962708;
    cartas[0].pontos_turisticos = 14;

    exibir_carta(cartas[0]);

  return 0;}