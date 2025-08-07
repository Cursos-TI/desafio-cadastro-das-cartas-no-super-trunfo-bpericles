#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno Pericles

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 01
    char codigicidade[50];
    int populacao;
    float areaemkm ;
    float pib ;
    int NumeroPontosTuristico;
    // Carta 02
    char codigicidade02[50];
    int populacao02;
    float areaemkm02;
    float pib02;
    int NumeroPontosTuristico02;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Codigo Da Carta 

    printf("Desafio Super Trunfo - Países \n");
    printf("\n");

    // Primeira Carta

    printf("Insira os dados da primeira carta \n");
    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigicidade);
    
    // Numero de habitantes

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico);

    printf("\n"); 

    // Segunda Carta

    

    printf("Insira os dados da segunda carta \n");
    printf("\n");

    // Codigo da carta

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigicidade02);
    
    // Numero de habitantes

   printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao02);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm02);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib02);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico02);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Imprimindo dados da carta 01

    printf("\n");

    printf("Codigo da carta: %s \n", codigicidade);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Área da cidade: %f \n", areaemkm);
    printf("Pib: %f \n", pib);
    printf("Numeros de pontos turistico: %d \n", NumeroPontosTuristico);
   

    // Imprimindo dados da carta 02
    printf("\n");

    printf("Codigo da carta: %s \n", codigicidade02);
    printf("Numero de habitantes: %d \n", populacao02);
    printf("Área da cidade: %f \n", areaemkm02);
    printf("Pib: %f \n", pib02);
    printf("Numeros de pontos turistico: %d \n", NumeroPontosTuristico02);
    

    return 0;
}
