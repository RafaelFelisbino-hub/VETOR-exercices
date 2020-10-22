/*Dado o nome e a idade de um conjunto de 10 pessoas, elabore um
algoritmo que guarde todos os dados na memória e liste o nome da
pessoa de maior e menor idade.*/

#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int vetor[10], i, maiorIdade = 0, menorIdade = 999;

	for (i = 0; i < 10; i++) 
	{
		printf("Digite as idades:  ");
		scanf_s("%i", &vetor[i]);

		if (vetor[i] > maiorIdade)
			maiorIdade = vetor[i];
		if (vetor[i] < menorIdade)
			menorIdade = vetor[i];
	}

	printf("O valor da maior idade e %i e a menor idade %i\n\n", maiorIdade, menorIdade);
	system("pause");
}