/*Escreva um algoritmo que leia e mostre um vetor de 20 números. A
seguir, conte quantos valores pares existem no vetor.*/

#include <stdio.h>
#include <stdlib.h>  

int main() 
{
	int vetor[20], i, somaPar = 0;

	for (i = 0; i < 20; i++) 
	{
		printf("Digite os valores:  ");
		scanf_s("%i", &vetor[i]);
		
		if (vetor[i] % 2 == 0)
			somaPar++;
	}
	printf("Existem %i valores pares no vetor\n", somaPar);
	system("pause");
}