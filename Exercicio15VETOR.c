/*Construa um algoritmo que efetue a tabuada de 1 a 10 de um
determinado número informado pelo usuário e armazene o resultado
dessa tabuada em um vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int vetor[100], i = 10, numero;

	printf("Digite um numero de 1 a 10:  ");
	scanf_s("%i", &numero);
	
	for (i = 1; i <= 10; i++)
	{
		vetor[i] = numero;
		vetor[i] = vetor[i] * i;

		printf("Os numeros da tabuada ao contrario sao:  %i\n", vetor[i]);
	}
	system("pause");
}