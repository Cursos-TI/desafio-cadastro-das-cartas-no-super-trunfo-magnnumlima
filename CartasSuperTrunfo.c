#include <stdio.h>

// Definição da estrutura para armazenar os dados da carta
 
typedef struct {
    char Estado;
    char Codigo[4];
    char Cidade[50];
    int Populacao;
    float Area_km2;
    float PIB;
    int Pontos_Turisticos;
} CartaSuperTrunfo;

// Função para exibir os dados da carta

void exibir_carta(CartaSuperTrunfo carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %c\n", carta.Estado);
    printf("Código: %s\n", carta.Codigo);
    printf("Nome da Cidade: %s\n", carta.Cidade);
    printf("População: %d Habitantes\n", carta.Populacao);
    printf("Área: %.2f km²\n", carta.Area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta.Pontos_Turisticos);
    printf("---------------------------\n");
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.Estado);

    printf("Digite o Código da Carta (Ex: A01): ");
    scanf(" %3s", carta1.Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.Cidade);

    printf("Digite a População: ");
    scanf("%d", &carta1.Populacao);

    printf("Digite a Área (km²): ");
    scanf("%f", &carta1.Area_km2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.PIB);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.Pontos_Turisticos);

    // Leitura dos dados da segunda carta
    printf("\nDigite o Estado (A-H): ");
    scanf(" %c", &carta2.Estado);

    printf("Digite o Código da Carta (Ex: B02): ");
    scanf(" %s", carta2.Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.Cidade);

    printf("Digite a População: ");
    scanf("%d", &carta2.Populacao);

    printf("Digite a Área (km²): ");
    scanf("%f", &carta2.Area_km2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.PIB);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.Pontos_Turisticos);

    // Exibição das cartas cadastradas
    exibir_carta(carta1);
    exibir_carta(carta2);

    return 0;
}