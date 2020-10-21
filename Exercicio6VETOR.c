/*Escreva o algoritmo para carregar um vetor de 10 posições e mostre os
elementos do vetor na ordem invertida utilize o comando Enquanto.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10},  i = 10;

	setlocale(LC_ALL, "Portuguese");

	while (i) 
	{
		i--;
		printf("A ordem do vetor é:  %i\n", vetor[i]);
	}
	system("pause");
}