/*Construir um algoritmo que leia 5 números inteiros e armazene em um
vetor. Depois da leitura de todos os números exibi-los um a um na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numeros[5], i = 0;

	setlocale(LC_ALL, "Portuguese");
	
	for (i = 0; i < 5; i++) 
	{
		printf("Digite os números:  ");
		scanf_s("%i", &numeros[i]);
	}
	
	for (i = 0; i < 5; i++) 
	{
		printf("\nOs números são:  %d", numeros[i]);
	}
	printf("\n\n");
	
	system("pause");
}