/*Escreva um algoritmo para carregar um vetor com 10 posições e mostre
o elemento que está na 5a posição.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int vetor[10] = { 1,2,3,4,5,6,7,8,9,10 }; //O vetor inicia de 0

	setlocale(LC_ALL, "Portuguese");
	
	printf("O numero na 5 posicão é:  %i", vetor[5]);

	system("pause");
}