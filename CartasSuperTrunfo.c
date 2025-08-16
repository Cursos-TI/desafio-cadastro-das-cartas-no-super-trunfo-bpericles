#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve omo base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Bruno Pericles

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 01
    char estado;
    char codigicidade [50];
    char nomeCidade[50];
    unsigned long int populacao;
    float areaemkm ;
    float pib ;
    int NumeroPontosTuristico;
    float Dens;
    float PibPercaoita;
    
    // Carta 02
    char estado02;
    char codigicidade02[50];
    char nomeCidade02[50];
    unsigned long int populacao02;
    float areaemkm02;
    float pib02;
    int NumeroPontosTuristico02;
    float Dens02;
    float PibPercaoita02;

    //variaveis para comparacao das cartas;
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPontosturisticos;
    int resultadoPIB;
    int resultadoDensidade;
    int resultadoPIBpercapito;
    int resultadoSuperPoder;
    double InversorDenP = areaemkm / populacao;
    float superPoder = (populacao + pib + areaemkm + NumeroPontosTuristico + PibPercaoita + InversorDenP);

    // Carta 02
    float InversorDenP02 = areaemkm02 / populacao02;
    float superPoder02 = (populacao02 + pib02 + areaemkm02 + NumeroPontosTuristico02 + PibPercaoita02 + InversorDenP02);
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Codigo Da Carta 1

    printf("Desafio Super Trunfo - Países \n");
    printf("\n");

    // Primeira Carta
    
    
    printf("Insira os dados da primeira carta \n");

    // Estado
    printf("Digite uma letra de A-H para a carta 1 (representando um dos oito estados): \n");
    scanf("%c", &estado),

    // Codigo da cidade
    printf("Digite o codigo da cidade:\n");
    scanf("%s", codigicidade);
    

    // Nome da cidade
    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade);
    
    // Numero de habitantes

    printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacao);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico);

  

    Dens = (float)(populacao) / areaemkm;
    //PibPercaoita = (float)(pib)/ populacao;
    PibPercaoita = (float)(pib * 1000000000.0f)/ populacao;

    printf("\n"); 

    // Segunda Carta

    

    printf("Insira os dados da segunda carta \n");
    printf("\n");

    // Estado
    printf("Digite uma letra de A-H para a carta 2 (representando um dos oito estados):\n");
    scanf(" %c", &estado02);

    // Codigo da carta

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigicidade02);
    
    // Nome da cidade
    printf("Digite o nome da cidade \n");
    scanf("%s", nomeCidade02);
    //fgets(nomeCidade02,50,stdin);
    // Numero de habitantes

   printf("Digite o numero de habitantes:\n");
    scanf("%lu", &populacao02);

    // A área da cidade em quilômetros quadrados

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &areaemkm02);

    // Produto Interno Bruto da cidade

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib02);

    // Número de Pontos Turísticos

    printf("Digite a quantidade de pontos turistos na cidade: \n");
    scanf("%d", &NumeroPontosTuristico02);

    Dens02 = (float)(populacao02) / areaemkm02;
   // PibPercaoita02 = (float)(pib02)/ populacao02;
    PibPercaoita02 = (float)(pib02 * 1000000000.0f) / populacao02;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Imprimindo dados da carta 01

    
    printf("\n");
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", codigicidade);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("Numero de habitantes: %lu \n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("Pib: %.2f Bilhões de reais \n", pib);
    printf("Numeros de pontos turistico: %d \n", NumeroPontosTuristico);
    printf("Densidade Populacional: %.2f hab/km² \n", Dens);
    printf("PIB per Capita: %.2f reais \n", PibPercaoita);
     // Super Poder
    printf("Super Poder: %.2f\n", superPoder);


    // Imprimindo dados da carta 02
    printf("\n");
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado02);
    printf("Codigo da carta: %s \n", codigicidade02);
    printf("Nome da cidade: %s \n", nomeCidade02);
    printf("Numero de habitantes: %lu \n", populacao02);
    printf("Área: %.2f km²\n", areaemkm02);
    printf("Pib: %.2f Bilhões de reais \n", pib);
    printf("Numeros de pontos turistico: %d \n", NumeroPontosTuristico02);
    printf("Densidade Populacional: %.2f hab/km² \n", Dens02);
    printf("PIB per Capita: %.2f reais \n", PibPercaoita02);
     // Super Poder
    printf("Super Poder: %.2f\n", superPoder02);

    
    //atribuicao de comparacoes
    resultadoPopulacao = populacao > populacao02;
    resultadoArea = areaemkm > areaemkm02;
    resultadoPIB = pib > pib02;
    resultadoPontosturisticos = NumeroPontosTuristico > NumeroPontosTuristico02;
    resultadoPIBpercapito = PibPercaoita > PibPercaoita02;
    resultadoDensidade = Dens < Dens02;
    resultadoSuperPoder = superPoder > superPoder02;

    printf("\n");

    //comparacao das cartas
    printf("****Comparação das Cartas****\n");
    printf("Populacao: a carta 1  venceu: %d\n", resultadoPopulacao);
    printf("Area: a carta 1 venceu: %d\n", resultadoArea);
    printf("Pontos turisticos: a carta 1 venceu: %d\n",resultadoPontosturisticos);
    printf("PIB: a certa 1 venceu: %d\n", resultadoPIB);
    printf("Densidade populacional: a certa 2 venceu: %d\n", resultadoDensidade);
    printf("PIB per capito: a certa 1 venceu: %d\n", resultadoPIBpercapito);
    printf("Super poder: a carta 1 venceu: %d\n", resultadoSuperPoder);

    return 0;
}
