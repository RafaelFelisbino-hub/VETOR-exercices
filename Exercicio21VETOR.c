/*Escreva um vetor de 300 posições e carregue-o com elementos gerados
com a função randi. Mostre quantos elementos são pares e quantos são
ímpares.*/

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