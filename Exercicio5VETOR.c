/*Escreva o algoritmo para carregar um vetor de 10 posições e mostre os
elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int vetor[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i <= 9; i++)
	{
		printf("Os números do vetores são: vetor[%i] = %i\n", i, vetor[i]);
	}

	system("pause");
}