/*Ler dois vetores A e B com 10 elementos cada, construir um vetor C,
onde cada elemento de C seja a subtração do elemento correspondente
de A com B.*/

#include <stdio.h>
#include <stdlib.h> 


int main()
{
	int vetor[10], vetor2[10], vetor3[10], i;

	for (i = 0; i < 10; i++)
	{
		printf("Digite os numeros do 1 vetor:  ");
		scanf_s("%i", &vetor[i]);

		printf("\nDigite os numeros do 2 vetor:  ");
		scanf_s("%i", &vetor2[i]);
	}
	for (i = 0; i < 10; i++)
	{
		vetor3[i] = vetor[i] - vetor2[i];
		printf("A subtracao dos vetores 1 e 2 e:  %i\n", vetor3[i]);
	}

	system("pause");
}
