#include <stdio.h>

int main(){
/*/ Definição das variáveis para armazenar as propriedades das cidades
char estado[10], estado2[10];
char codigoCarta[4], codigoCarta2[4];
char nomeCidade[50], nomeCidade2[50];
unsigned long int populacao, populacao2;
int pontosTuristicos, pontosTuristicos2;
float area, pib, area2, pib2;
int opcao, opcao2;


    // Cadastro das Cartas:
    // Lógica para solicitar ao usuário que insira os dados da CARTA 1
    // utilizando a função scanf para capturar as entradas.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 1:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade);
    printf("Populacao: ");
    scanf("%ld", &populacao);
    printf("Area (em km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);
    printf("========== DADOS INSERIDOS COM SUCESSO ===========\n");
    printf("\n");


    // Lógica para solicitar ao usuário que insira os dados da CARTA 2
    // utilizando a função scanf para capturar as entradas.
    printf("====================***====================\n");
    printf("Insira os dados da Carta 2:\n");
    printf("Insira o Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("========== DADOS INSERIDOS COM SUCESSO ===========\n");
    printf("\n");

    //UTILIZANDO O COMANDO PRINTF PARA APRESENTAR OS DADOS DA CARTA 1, INSERIDOS PELO USUÁRIO
    //NESSA PARTE ESTOU COLOCANDO O TEXTO DE APRESENTAÇÃO SEGUIDOS DOS VALORES ARMAZENADOS
    //NAS VARIAVEIS QUE SAO INDICADAS NO CÓDIGO.
    printf("\n");
    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta 01: %s\n",codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Area (em km²): %.2f\n",area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos);


    //APRESENTAÇÃO DAS INFORMAÇÕES DA CARTA 2
    printf("\n");
    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta 01: %s\n",codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Area (em km²): %.2f\n",area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);

#####################################################################################*/

    char name[10] = "Vicosa";
    char nome[10] = "Coimbra";
    int pop = 5000, pop1 = 6000, opcao;
    float ar = 8.500, ar1 = 8.300;
    float PIB = 3000, PIB1 = 4500;
    int Tur = 12, Tur1 = 8;

    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 1:\n");
    printf("Nome da cidade = %s \n", name);
    printf("População = %d \n", pop);
    printf("Area (em km²): %.2f\n",ar);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", Tur);
    printf("\n");

    printf("====================***====================\n");
    printf("INFORMAÇÕES DA CARTA 2:\n");
    printf("Nome da cidade = %s \n", nome);
    printf("População = %d \n", pop1);
    printf("Area (em km²): %.2f\n",ar1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", Tur1);

    printf("\n");
    printf("====================***====================\n");
    printf("\n");
    printf("####   AGORA VAMOS INICIAR O JOGO    ####\n");
    printf("\n");

    printf("Escolha a seguir qual atributo deseja comparar:\n");
    printf("1. População\n2. Área (em km²)\n3. PIB\n4. Pontos Turisticos\n");
    scanf("%d", &opcao);

    printf("Opção escolhida: %d\n", opcao);

    switch (opcao)
    {
    case 1:
        if (pop > pop1)
        {
            printf("Carta 1 %s é a VENCEDORA!\n", name);
        } else printf("Carta 2 %s é a VENCEDORA!", nome);
        
        break;
    case 2:
        printf("Teste");
    default:
        break;
    }













    return 0;
}










    /*
    printf("\n");
    printf("====================***====================\n");
    printf("\n");
    printf("####   AGORA VAMOS INICIAR O JOGO    ####\n");
    printf("\n");

    printf("Escolha a seguir qual atributo deseja comparar:\n");
    printf("1. População\n2. Área (em km²)\n3. PIB\n4. Pontos Turisticos\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("Carta 1 %s é a VENCEDORA!\n", nomeCidade);
        } else printf("Carta 2 %s é a VENCEDORA!", nomeCidade2);
        
        break;
    case 2:
        printf("Teste");
    default:
        break;
    }

return 0;
}
*/