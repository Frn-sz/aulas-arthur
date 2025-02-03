#include <stdio.h>

/*
argc = número de argumentos passados na linha de comando
argv = argumentos passados na linha de comando dentro de um vetor
*/
int main(int argc, char **argv)
{
    // Declarando váriavel idade do tipo inteiro
    /*
    int = inteiro com sinal
    float = número de ponto flutuante (com vírgula)
    double = número de ponto flutuante com dupla precisão (mais casas decimais)
    char = caractere
    */

    int idade, altura;

    printf("Digite sua altura e sua idade\n");

    scanf("%d %d", &idade, &altura);

    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %d\n", altura);

    return 0;
}