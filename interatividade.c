#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Informações da primeira carta
    char pais[20] = "Brasil";
    unsigned long int populacao = 15000;
    float area = 6000;
    float pib = 7000;
    int ponto_turistico = 50;
    float densidade_populacional;
    int atributo;

    // Informações da segunda Carta
    char pais_2[20] = "Alemanha";
    unsigned long int populacao_2 = 2000;
    float area_2 = 5000;
    float pib_2 = 6000;
    int ponto_turistico_2 = 40;
    float densidade_populacional_2;
    

    densidade_populacional = populacao / area; // calculando densidade

    densidade_populacional_2 = populacao_2 / area_2; // Calculando densidade

    //menu moestrado ao usuário
    printf("Digite o número do atributo que deseja:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turístico\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo);


    switch (atributo)
    {
    case 1:
        

        if (populacao > populacao_2)//comparação população
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: População\n");
            printf("Valor de cada atributo:  %s: %lu %s: %lu\n", pais, populacao, pais_2, populacao_2);
            printf("Carta vencedora: %s\n", pais);
           
        }

        else if (populacao < populacao_2)//comparação população
        {
            printf("%s e %s\n", pais_2, pais);
            printf("Atributo usado para comparação: População\n");
            printf("Valor de cada atributo: %s: %lu %s: %lu\n", pais, populacao, pais_2, populacao_2);
            printf("Carta vencedora: %s\n", pais_2);

        }

        else
        {
            printf("%s e %s\n", pais_2, pais);//comparação de empate
            printf("Atributo usado para comparação: População\n");
            printf("Valor de cada atributo: %s: %lu %s: %lu\n", pais, populacao, pais_2, populacao_2);
            printf("Empate\n");
        }

        break;

    case 2:
       

        if (area > area_2)
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: Área\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, area, pais_2, area_2);
            printf("Carta vencedora: %s\n", pais);
        }

        else if (area < area_2)//comparação de area
        {
            printf("%s e %s\n", pais_2, pais);//comparação de area
            printf("Atributo usado para comparação: Área\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, area, pais_2, area_2);
            printf("Carta vencedora: %s\n", pais_2);
        }

        else
        {
            printf("%s e %s\n", pais_2, pais);//comparação de area empate
            printf("Atributo usado para comparação: Área\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, area, pais_2, area_2);
            printf("Empate\n");
        }
        break;

    case 3:
        

        if (pib > pib_2)//comparação de pib
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: PIB\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, pib, pais_2, pib_2);
            printf("Carta vencedora: %s\n", pais);
        }

        else if (pib < pib_2) //comparação de pib
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: PIB\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, pib, pais_2, pib_2);
            printf("Carta vencedora: %s\n", pais_2);
        }

        else
        {
            printf("%s e %s\n", pais_2, pais);//comparação de empate
            printf("Atributo usado para comparação: PIB\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, pib, pais_2, pib_2);
            printf("Empate\n");
        }

        break;

    case 4:
       

        if (ponto_turistico > ponto_turistico_2)//comparação ponto turistico
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: Ponto Turístico\n");
            printf("Valor de cada atributo:  %s: %d %s: %d\n", pais, ponto_turistico, pais_2, ponto_turistico_2);
            printf("Carta vencedora: %s\n", pais);
        }

        else if (ponto_turistico < ponto_turistico_2)//comparação ponto turistico
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: Ponto Turístico\n");
            printf("Valor de cada atributo:  %s: %d %s: %d\n", pais, ponto_turistico, pais_2, ponto_turistico_2);
            printf("Carta vencedora: %s\n", pais_2);
        }

        else
        {
            printf("%s e %s\n", pais_2, pais);//comparação ponto turistico empate
            printf("Atributo usado para comparação: Ponto Turístico\n");
            printf("Valor de cada atributo:  %s: %d %s: %d\n", pais, ponto_turistico, pais_2, ponto_turistico_2);
            printf("Empate\n");
        }

        break;

    case 5:
        

        if (densidade_populacional > densidade_populacional_2)//comparação densidade
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: Densidade Populacional\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, densidade_populacional, pais_2, densidade_populacional_2);
            printf("Carta vencedora: %s\n", pais_2);
        }

        else if (densidade_populacional < densidade_populacional_2)//comparação densidade
        {
            printf("%s e %s\n", pais, pais_2);
            printf("Atributo usado para comparação: Densidade Populacional\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, densidade_populacional, pais_2, densidade_populacional_2);
            printf("Carta vencedora: %s\n", pais);
        }

        else
        {
            printf("%s e %s\n", pais_2, pais);//comparação densidade empate
            printf("Atributo usado para comparação: Densidade Populacional\n");
            printf("Valor de cada atributo:  %s: %f %s: %f\n", pais, densidade_populacional, pais_2, densidade_populacional_2);
            printf("Empate\n");
        }
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}