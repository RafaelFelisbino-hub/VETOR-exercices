/*Escreva um algoritmo que leia um vetor de 20 posições e mostre- o. Em
seguida, troque o primeiro elemento com o último, o segundo com o
penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente.
Mostre o novo vetor depois da troca.*/

#include <stdio.h>
#include <stdlib.h> 

int main() 
{
	int vetor[20], vetor2[20], i, inversor;

	for (i = 0; i < 20; i++) 
	{
		printf("Digite os numeros:  ");
		scanf_s("%i", &vetor[i]);
	}
	for (i = 0; i < 20; i++) 
	{
		printf("Os valores no vetor sao:  %i\n", vetor[i]);
	}
	for (i = 0; i < 10; i++) 
	{
		inversor = vetor[i];
		vetor[i] = vetor[21 - i];
		vetor[21 - i] = inversor;
	}
	for (i = 0; i < 20; i++) 
	{
		printf("O resultado e:  %d\n", vetor[i+2]);
	}
	system("pause");
}