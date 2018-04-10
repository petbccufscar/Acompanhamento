#include<stdio.h>


/*
Numeros Impares
Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores
desse numero, com excecao dele proprio. 
Ex: a soma dos divisores do numero 66 e 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/


int main() {
	int x, soma = 1, i;

	printf("Digite o valor de x:");
	scanf("%d", &x);
	printf("\nA soma dos divisores é:\n");
	
	printf("%d ", soma);
	for(i=2; i<x; i++){
		if(x%i==0){
			printf("+ %d ", i);
			soma += i;
		}
	}

	printf("= %d\n", soma);
	return 0;
}