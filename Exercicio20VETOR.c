/*Escreva um algoritmo que possua um vetor com 200 posi��es. Cada
posi��o do vetor deve ser alimentada por um valor de retorno da fun��o
randi. Mostre o vetor constru�do.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int vetor[200], i;

	srand(time(NULL));

	for (i = 0; i < 200; i++)
	{
		vetor[i] = rand() % 200;
		printf("Os numeros do vetor, posicao %i = %i\n", i, vetor[i]);
	}

	system("pause");
}
