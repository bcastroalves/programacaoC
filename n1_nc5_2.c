#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "sergio";

    printf("Altura: %f\n", altura);
    printf("Opção: %c\n", opcao);
    printf("Nome: %s Idade %d", nome, idade);
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}