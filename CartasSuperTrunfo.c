#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //criando variaveis
    int populacao;
    float area, pib;
    int pontosturisticos;

    //inserindo dados de entrada para usuario digitar
printf("Digite a quantidade população: \n");
scanf("%d", &populacao);

printf("Digite a area: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite a qtd de pontos turisticos: \n");
scanf("%d", &pontosturisticos);

//imprimindo na tela informações digitadas pelo usuario
printf("População: %d \n", populacao);
printf("Area: %f \n", area);
printf("PIB: %f \n", pib);
printf("Pontos Turisticos: %d \n", pontosturisticos);
    return 0;
}