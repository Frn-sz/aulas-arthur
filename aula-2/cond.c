#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Digite um número maior que zero!");
        return 1;
    }

    // 0 = false
    // 1 = true

    //! = Operador lógico de negação
    //&& = Operador lógico AND
    //|| = Operador lógico OR

    //== = Operador de comparação
    //=  = Operador de atribuição

    // if (numero % 2 == 0)
    // {
    // printf("O número é par");
    // }
    // else if(numero == 3){
    // printf("O número é 3");
    // }
    // else
    // {
    // printf("O número não é par");
    // }

    // switch (numero)
    // {
    // case 1:
    //     printf("O numero é 1");
    //     break;
    // case 2:
    //     printf("O numero é 2");
    //     break;
    // default:
    //     printf("O numero não é nem 1 nem 2");
    // }
}
