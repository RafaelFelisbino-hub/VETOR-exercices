/*Elaborar um algoritmo que leia 20 n�meros, calcule a m�dia entre eles e
exiba os n�meros que forem maior que a m�dia.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float numero[20], media, totalNumero = 0;
	int i;

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i <= 19; i++)
	{
		printf("Digite os n�meros:  ");
		scanf_s("%f", &numero[i]);
		totalNumero += numero[i];
		media = totalNumero / i - 1;
	}

	printf("\nA m�dia �: %.2f\n", media);

	for (i = 0; i <= 19; i++)
	{
		if (numero[i] > media)
		printf("N�meros maiores que a m�dia:  %.2f\n", numero[i]);
	}
	
	system("pause");
}
