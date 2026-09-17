/*
4. O Menor de Três Números
Expandindo a lógica de múltiplas condições, leia três números inteiros. Utilizando if, 
else if e o operador lógico && (E), escreva um programa para descobrir e imprimir qual dos três é o menor.
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
    int num2 = 0;
    int num3 = 0;
    char continuar;

    do {
        printf("Entre com três inteiros e eu lhe direi qual o menor: ");
        scanf("%d%d%d", &num1, &num2, &num3);

        if (num1 <= num2 && num1 <= num3) {
            printf("O menor número é o %d\n", num1);
        } 
        else if (num2 <= num1 && num2 <= num3) {
            printf("O menor número é o %d\n", num2);
        } 
        else {
            printf("O menor número é o %d\n", num3);
        }

        printf("\nDeseja testar novamente? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");

    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado!\n");
    return 0;
}