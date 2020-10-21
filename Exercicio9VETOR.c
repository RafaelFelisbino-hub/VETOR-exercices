/*Construir um algoritmo que leia 10 números reais e armazene em um
vetor. Depois do preenchimento total, percorrer esse vetor uma vez
procurando pelo maior elemento.*/

#include <stdio.h>
#include <stdlib.h> 

int main() 
{
	float vetor[10], numeroMaior = 0;
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("Digite os numeros reais:  ");
		scanf_s("%f", &vetor[i]);
	}
	for (i = 0; i < 5; i++) 
	{
		if (vetor[i] > numeroMaior) 
		{
			numeroMaior = vetor[i];
		}
	}
	printf("O numero maior e:  %.2f\n\n", numeroMaior);
	system("pause");
}