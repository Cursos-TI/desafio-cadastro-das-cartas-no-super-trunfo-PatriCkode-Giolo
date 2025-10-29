#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países

// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    
    ///----------------------------------------------Declarando variáveis das duas cartas.
    int opcaoCarta1, opcaoCarta2;
    //--------------------------------carta 1
    char estado0, codigoCarta0[4], nomeCidade0[51];     
    unsigned long int populacao0;
    int pontoTuristico0;
    float areaCidade0, pibCidade0;
    //--------------------------------carta 2
    char estado1, codigoCarta1[4], nomeCidade1[51];
    unsigned long int populacao1;
    int pontoTuristico1;
    float areaCidade1, pibCidade1;
///----------------------------------------------Recepção antes do cadastro.
    printf("Bem-vindo ao SuperTrunfo!\n\nA seguir cadastre duas cartas de seu interesse.\n\n");

///----------------------------------------------Entrada de Dados.
//----------------carta 1
    printf("Carta - 1\n\n");
    
    printf("Insira uma letra de A a H para o estado que escolher: ");
    scanf(" %c", &estado0);
    
    
    printf("Escolha a letra do estado seguida de um número de 01 a 04. Ex:A01\n");
    scanf("%s", codigoCarta0);

    getchar();//--------limpa o buffer pra evitar que o fgets pule direto para próxima requisição.

    printf("Insira o nome da cidade: ");
    fgets(nomeCidade0,50,stdin);
    nomeCidade0[strcspn(nomeCidade0,"\n")] = 0;
 
    printf("Insira a quantidade da populacional: ");
    scanf("%ld", &populacao0);
    
 
    printf("Insira a area da sua cidade em km²: ");
    scanf("%f", &areaCidade0); 
    
 
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibCidade0);   
    
   
    printf("Insira o numero total de pontos turísticos: ");
    scanf("%i", &pontoTuristico0);
    
    puts("");//-----PULA LINHA
//--------------------carta 2
    
    printf("Carta - 2\n\n");
    
    printf("Insira uma letra de A a H para o estado que escolher: ");
    scanf(" %c", &estado1);
    
    
    printf("Escolha a letra do estado seguida de um número de 01 a 04. Ex:A01\n");
    scanf("%s", codigoCarta1);
    
    getchar();//--------limpa o buffer pra evitar que o fgets pule direto para próxima requisição.
    
    printf("Insira o nome da cidade: ");
    fgets(nomeCidade1,50,stdin);
    nomeCidade1[strcspn(nomeCidade1,"\n")] = 0;
    
    printf("Insira a quantidade da populacional: ");
    scanf("%ld", &populacao1);
    
    printf("Insira a area da sua cidade em km²: ");
    scanf("%f", &areaCidade1); 
    
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibCidade1);   
    
    printf("Insira o numero total de pontos turísticos: ");
    scanf("%i", &pontoTuristico1);
    

    ///-------------------------------novos atributos para carta.
    float pibPercapt0, pibPercapt1;
    float densPopul0, densPopul1;
    
    densPopul0 = populacao0 / areaCidade0;
    densPopul1 = populacao1 / areaCidade1;

    pibPercapt0 = pibCidade0 / populacao0;
    pibPercapt1 = pibCidade1 / populacao1;

    puts("");//----PULA LINHA
    
    ///--------------------------------------------------------exibindo resultado carta 1.
    printf(
        "Carta - 1\n\n");
    printf(    
        "Estado: %c\n", estado0);
    printf(
        "Código: %s\n", codigoCarta0);
    printf(
        "Nome da Cidade: %s\n", nomeCidade0);    
    printf(
        "População: %ld\n", populacao0);    
    printf(
        "Área: %.2fm²\n", areaCidade0);    
    printf(
        "PIB: R$%.2f Bilhões\n", pibCidade0 / 1e9);    
    printf(
        "Número de Pontos Turísticos: %i\n", pontoTuristico0);
    printf(
        "Densidade Populacional: %.2f hab/km²\n", densPopul0);
    printf(
        "PIB per capita: %.2f reais\n\n", pibPercapt0);

    ///--------------------------------------------------------exibindo resultado carta 2
    printf(
        "Carta - 2\n\n");
    printf(    
        "Estado: %c\n", estado1);
    printf(
        "Código: %s\n", codigoCarta1);
    printf(
        "Nome da Cidade: %s\n", nomeCidade1);    
    printf(
        "População: %ld\n", populacao1);    
    printf(
        "Área: %.2fm²\n", areaCidade1);    
    printf(
        "PIB: R$%.2f Bilhões\n", pibCidade1 / 1e9);    
    printf(
        "Número de Pontos Turísticos: %i\n", pontoTuristico1);
    printf(
        "Densidade Populacional: %.2f hab/km²\n", densPopul1);
    printf(
        "PIB per capita: %.2f reais\n\n", pibPercapt1);
    printf(
        "Cartas cadastradas com Sucesso!\n\n");

///-------------------------------------------HORA DO DUELO
    float inverso_densidade0 = areaCidade0 / populacao0;
    float inverso_densidade1 = areaCidade1 / populacao1;
    
    float superPoder0 = populacao0 + areaCidade0 + pibCidade0 + pontoTuristico0 + pibPercapt0 + inverso_densidade0;   
    float superPoder1 = populacao1 + areaCidade1 + pibCidade1 + pontoTuristico1 + pibPercapt1 + inverso_densidade1; 

    printf("### HORA DO DUELO! ###\n\n");
    
    //apresentação das cartas cadastradas
    printf("Carta 1 - Estado: %c | Código: %s | Cidade: %s\n", estado0, codigoCarta0, nomeCidade0);
    printf("Carta 2 - Estado: %c | Código: %s | Cidade: %s\n\n", estado1, codigoCarta1, nomeCidade1);
    
    printf("Escolha o atributo que desafiará o atributo inimigo.\n");

    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica(vence aquele com menor valor)\n\n");
    
    //entrada de dados para escolha no menu
    printf("Escolha: ");
    scanf("%d", &opcaoCarta1);
    puts(""); //pula linha sem precisar usar '\n'
    opcaoCarta2 = opcaoCarta1; //recebe o mesmo valor de entrada da primeira variável para comparar o mesmo atributo la na frente.

    //MENU   
    switch (opcaoCarta1)
    {
    case 1:
        printf("Atributo 'População' selecionado para essa partida.\n\n");
        break;

    case 2:
        printf("Atributo 'Área' selecionado para essa partida.\n\n");
        break;

    case 3:
        printf("Atributo 'PIB' selecionado para essa partida.\n\n");
        break;

    case 4:
        printf("Atributo 'Número de pontos turísticos' selecionado para essa partida.\n\n");
        break;
    
    case 5:
        printf("Atributo 'Densidade demográfica' selecionado para essa partida.\n\n");
        break;
    
    default:
        printf("### Atributo selecionado não existe! ###\n");
        break;
    }
//Estrutura de decisão para fase de comparação de atributo e exibição do vencedor.
    if ((opcaoCarta1 = 1)&&(opcaoCarta2 = 1)){
       
        if(populacao0 > populacao1){
            printf("Estado: %s venceu!", nomeCidade0);
        }
        else if (populacao0 < populacao1){
            printf("Estado: %s venceu!", nomeCidade1);
        }
        else{
            printf("Empate!");
        }
        
    }else if ((opcaoCarta1 = 2)&&(opcaoCarta2 = 2)){
        
        if(areaCidade0 > areaCidade1){
            printf("Estado: %s venceu!", nomeCidade0);
        }
        else if (areaCidade0 < areaCidade1){
            printf("Estado: %s venceu!", nomeCidade1);
        }
        else{
            printf("Empate!");
        }
        
    }else if ((opcaoCarta1 = 3)&&(opcaoCarta2 = 3)){
        
        if( pibCidade0 > pibCidade1){
            printf("Estado: %s venceu!", nomeCidade0);
        }
        else if (pibCidade0 < pibCidade1){
            printf("Estado: %s venceu!", nomeCidade1);
        }
        else{
            printf("Empate!");
        }

    }else if ((opcaoCarta1 = 4)&&(opcaoCarta2 = 4)){
       
        if( pontoTuristico0 > pontoTuristico1){
            printf("Estado: %s venceu!", nomeCidade0);
        }
        else if (pontoTuristico0 < pontoTuristico1){
            printf("Estado: %s venceu!", nomeCidade1);
        }
        else{
            printf("Empate!");
        }

    }else if ((opcaoCarta1 = 5)&&(opcaoCarta2 = 5)){
        
        if( inverso_densidade0 < inverso_densidade1){
            printf("Estado: %s venceu!", nomeCidade0);
        }
        else if (inverso_densidade0 > inverso_densidade1){
            printf("Estado: %s venceu!", nomeCidade1);
        }
        else{
            printf("Empate!");
        }
    }
    
    return 0;
}
