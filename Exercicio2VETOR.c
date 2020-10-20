/*Elaborar um algoritmo que leia 20 números, calcule a média entre eles e
exiba os números que forem maior que a média.*/

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
		printf("Digite os números:  ");
		scanf_s("%f", &numero[i]);
		totalNumero += numero[i];
		media = totalNumero / i - 1;
	}

	printf("\nA média é: %.2f\n", media);

	for (i = 0; i <= 19; i++)
	{
		if (numero[i] > media)
		printf("Números maiores que a média:  %.2f\n", numero[i]);
	}
	
	system("pause");
}
