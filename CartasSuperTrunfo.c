#include <stdio.h>
	int main () {
		// VARIAVEIS CARTA 1
		char estado1[2], codcarta1[4], nomecidade1[50];
		int populacao1, pontoturistico1;
		float area1, pib1;

		// VARIAVEIS CARTA 2 
		char estado2[2], codcarta2[4], nomecidade2[50];
		int populacao2, pontoturistico2;
		float area2, pib2;
		
		// COLETA DE DADOS DA PRIMEIRA CARTA

		printf ("Digite as informacoes da primeira carta:\n");
		printf ("Estado da Carta\n");
		scanf ("%s", estado1);
		printf ("Codigo da carta\n");
		scanf ("%s", codcarta1);
		printf ("Nome da cidade\n");
		scanf (" %[^\n]", nomecidade1); //[^\n]permite colocar nomes compostos
		printf ("Populacao da carta\n");
		scanf (" %d", &populacao1);
		printf ("Area da cidade na carta\n");
		scanf (" %f", &area1);
		printf ("Pib da cidade\n");
		scanf (" %f", &pib1);
		printf ("Quantidades de Pontos Turisticos\n");
		scanf (" %d", &pontoturistico1);
		
		// COLETA DOS DADOS DA SEGUNDA CARTA
		
		printf ("Digite as informacoes da segunda carta:\n");
		printf ("Estado da Carta\n");
		scanf ("%s", estado2);
		printf ("Codigo da carta\n");
		scanf ("%s", codcarta2);
		printf ("Nome da cidade\n");
		scanf (" %[^\n]", nomecidade2);
		printf ("Populacao da carta\n");
		scanf (" %d", &populacao2);
		printf ("Area da cidade na carta\n");
		scanf (" %f", &area2);
		printf ("Pib da cidade\n");
		scanf (" %f", &pib2);
		printf ("Quantidades de Pontos Turisticos\n");
		scanf (" %d", &pontoturistico2);

		// mostrar resultados

		printf ("\n=== Resultado da Carta 1 ===\n");
		printf ("Estado: %s\n", estado1);
		printf ("Codigo: %s\n", codcarta1);
		printf ("Nome da Cidade: %s\n", nomecidade1);
		printf ("Populacao da Cidade %d\n",populacao1);
		printf ("Area da Cidade: %f\n", area1);
		printf ("PIB da Cidade: %f\n", pib1);
		printf ("Quantidades de Pontos Turisticos: %d\n", pontoturistico1);
		
		printf ("\n=== Resultado da Carta 2 ===\n");
		printf ("Estado: %s\n", estado2);
		printf ("Codigo: %s\n", codcarta2);
		printf ("Nome da Cidade: %s\n", nomecidade2);
		printf ("Populacao da Cidade %d\n",populacao2);
		printf ("Area da Cidade: %f\n", area2);
		printf ("PIB da Cidade: %f\n", pib2);
		printf ("Quantidades de Pontos Turisticos: %d\n", pontoturistico2);
		
		return 0;

	}
