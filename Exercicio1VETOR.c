/*Construir um algoritmo que leia 5 n�meros inteiros e armazene em um
vetor. Depois da leitura de todos os n�meros exibi-los um a um na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numeros[5], i = 0;

	setlocale(LC_ALL, "Portuguese");
	
	for (i = 0; i < 5; i++) 
	{
		printf("Digite os n�meros:  ");
		scanf_s("%i", &numeros[i]);
	}
	
	for (i = 0; i < 5; i++) 
	{
		printf("\nOs n�meros s�o:  %d", numeros[i]);
	}
	printf("\n\n");
	
	system("pause");
}