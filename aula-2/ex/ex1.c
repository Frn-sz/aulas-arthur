çear#include <stdio.h>

/*Ler números do usuário até que um número negativo seja informado e,
em seguida, calcular a soma dos números lidos. Utilizar do-while.*/

int main(){

    //Declarando variáveis num e soma como 0
    int num, soma = 0;
    
    do
    {
        printf("Digite um número: ");

        //Pegando input do usuário
        scanf("%d", &num);
        
        //Verificando se número é positivo
        if(num >= 0){
            //Somando entradas do usuário
            soma += num;
        }

        printf("\nO número escolhido foi: %d\n", num);        
    } while (num >= 0);
    
    
    printf("\nO número não pode ser negativo!\n");
    

    printf("\nA soma é: %d\n", soma);
}