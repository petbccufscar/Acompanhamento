#include <stdio.h>
#include <stdlib.h>
/**
 * Criar um programa que dado um numero N de linhas imprima na tela um
 * triangulo de pontos como a seguir
 *
 * Entrada:
 * 3
 * Saida:
 * .
 * ..
 * ...
 * 
 * Entrada:
 * 4
 * .
 * ..
 * ...
 * ....
 **/

int main(){
        /**
         * Variaveis:
         *  num_pontos - numero de pontos impressos na linha atual
         *  max_num_linhas - o "N" do problema, numero de linhas que devem ser
         * impressas
         *
         * Logica:
         *  Enquanto o numero da linha atual não for maior que o numero maximo
         *  de linhas. imprima pontos e incrementa num_pontos. 
         *  E se o numero de pontos nessa linha (num_pontos), for igual ao numero dessa
         *  linha (linha_atual), imprima uma nova linha, incrementa num_linha
         *  e zera num_pontos 
         **/ 
        int num_pontos = 0;
        int linha_atual = 1;
        int max_num_linhas; // "N"
        printf("Insira o numero de linhas do triangulo\n");
        
        while(scanf("%d",&max_num_linhas)!=1){//Enquanto tiver erro ... tenta novamente
                while(getchar() != '\n'); //limpa buffer de entrada
                printf("Algo deu errado... Tente novamente\n");
        };
        
        while(linha_atual <= max_num_linhas){
                printf(".");
                num_pontos++;
                if(num_pontos == linha_atual){
                        num_pontos = 0;
                        printf("\n");
                        linha_atual++;
                }
        }

}

