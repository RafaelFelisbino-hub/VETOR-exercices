/*Escreva o algoritmo para carregar um vetor de 10 posições em seguida
gera um vetor com os mesmos elementos do primeiro vetor
multiplicados por 2.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10}, i, vetor2[10];

	for (i = 0; i < 10; i++) 
	{
		printf("Os números sem multiplicar:  %i\n", vetor[i]);
	}

	for (i = 0; i < 10; i++) 
	{
		if (vetor[i]) 
		{
			vetor2[i] = vetor[i] * 2;
			printf("Os números multiplicados:  %i\n", vetor2[i]);

		}
	}
}