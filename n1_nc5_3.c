#include <stdio.h>

int main(){
    int idade;
    char opcao;
    float altura;
    // Sintaxe scanf
    // scanf("formato1", "formato2", &variavel1, &variavel2, ...);
    
    // printf("Entre com sua idade: \n");
    // scanf("%d", &idade);
    // printf("Idade: %d\n", idade);
    // printf("Entre com sua altura: \n");
    // scanf("%f", &altura);

    printf("Entre com sua idade e altura: \n");
    scanf("%d %f", &idade, &altura);
    printf("%d %f\n", idade, altura);
    printf("Entre com sua opcao: ");
    scanf(" %c", &opcao); // Espaço incluído antes do %c pois apos apertar [enter] após a opção anterior o [enter] ainda fica no buffer de entrada e é lido pelo scanf
    printf("Opcao escolhida: %c", opcao);

    return(0);
}