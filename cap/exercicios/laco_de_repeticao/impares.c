#include<stdio.h>


/*
Numeros Impares
Leia um valor inteiro X (1 <= X <= 1000). 
Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
*/


int main() {
	int x, i;

	do{
		printf("Digite o valor de x:");
		scanf("%d", &x);
	}while(x<1 || x>1000);

	for(i=0; i<=x; i++){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}

	return 0;
}