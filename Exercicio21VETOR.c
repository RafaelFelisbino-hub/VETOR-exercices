/*Escreva um vetor de 300 posi��es e carregue-o com elementos gerados
com a fun��o randi. Mostre quantos elementos s�o pares e quantos s�o
�mpares.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
	int vetor[300], i, par = 0, impar = 0;

	srand(time(NULL));

	for (i = 0; i < 300; i++)
	{
		vetor[i] = rand() % 300;
		if (vetor[i] % 2 == 0)
			par++;
	}
	for (i = 0; i < 300; i++) 
	{
		vetor[i] = rand() % 300;
		if (vetor[i] % 2 == 1)
			impar++;
			
	}
	system("pause");
	printf("Numeros pares: %i\n", par);
	printf("Numeros impares: %i\n", impar);
}