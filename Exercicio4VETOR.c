/*Escreva um algoritmo para carregar um vetor com 10 posi��es e mostre
o elemento que est� na 5a posi��o.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int vetor[10] = { 1,2,3,4,5,6,7,8,9,10 }; //O vetor inicia de 0

	setlocale(LC_ALL, "Portuguese");
	
	printf("O numero na 5 posic�o �:  %i", vetor[5]);

	system("pause");
}