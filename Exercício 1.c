/*
1. Múltiplo de 3
Escreva um programa em C que solicite um número inteiro ao usuário. Assim como na verificação de números pares, 
utilize a instrução if e o operador de módulo (%) para verificar se a divisão do número por 3 tem resto zero, 
indicando que ele é múltiplo de 3.
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
    char continuar;

    do {
        printf("Entre com um inteiro e eu lhe direi\n");
        printf("se ele é multiplo de 3: ");
        scanf("%d", &num1);
     
        if ((num1 % 3) == 0){
            printf("\n%d é multiplo de 3\n", num1);
        } else {
            printf("\n%d não é multiplo de 3\n", num1);
        }

        printf("\nDeseja testar outro número? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nPrograma encerrado. Até logo!\n");
    return 0;
}