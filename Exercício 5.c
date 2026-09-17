/*
5. Comparação de Dois Números
Desenvolva um programa que leia dois números inteiros. 
Use a estrutura else if para encadear as condições e imprimir se "Os números são iguais", 
"O primeiro é maior" ou "O segundo é maior".
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
    int num2 = 0;
    char continuar;

    do {
        printf("Entre com dois inteiros e eu lhe direi\n");
        printf("se são iguais ou se um é maior que o outro: " );
        scanf("%d%d", &num1, &num2);

        if (num1 == num2) {
            printf("Os números são iguais\n");
        } else if (num1 > num2) {
            printf("O %d é maior\n", num1);
        } else {
            printf("O %d é maior\n", num2);
        }

        printf("\nDeseja comparar outro par? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");

    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado!\n");
    return 0;
}