/*Elabore um algoritmo que leia os valores de um vetor de tamanho 5 e
que em seguida gera um segundo vetor na ordem inversa do primeiro
vetor*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int vetor[5], vetor2[5], i;

	for (i = 0; i < 5; i++)
	{
		printf("Digite os numeros:  ");
		scanf_s("%i", &vetor[i]);
	}

	for (i = 4; i >= 0; i--) 
	{
		vetor2[i] = vetor[i];
			printf("\nA ordem inversa e:  %i\n", vetor2[i]);
	}
	system("pause");
}