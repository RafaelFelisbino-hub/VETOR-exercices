/*Escreva um algoritmo que possua um vetor com 200 posições. Cada
posição do vetor deve ser alimentada por um valor de retorno da função
randi. Mostre o vetor construído.*/

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
