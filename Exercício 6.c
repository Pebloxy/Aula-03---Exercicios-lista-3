/*
6. Bônus Salarial
Escreva um programa que leia o salário de um funcionário (em valor inteiro). Se o valor for menor ou igual a 1500, 
conceda um bônus de 200 reais somando ao total. Imprima o novo salário. Se for maior, imprima o salário normal dizendo "Sem bônus".
*/

#include <stdio.h>

int main() {
    int salario = 0;
    char continuar;
    do {
        printf("Entre com seu salário e eu lhe direi\n");
        printf("se você vai ganhar um bônus ou não: ");
 
        scanf("%d", &salario);
 
        if (salario <= 1500){
            printf("Você ganhou um bônus de R$ 200!\n");
            printf("Seu sálario: R$%d!\n", salario + 200);
        } else{
            printf("Sem bônus\n");
            printf("Seu sálario: R$%d!\n", salario);
        }
        printf("\nDigitou o salário errado? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    printf("\nPrograma encerrado. Até logo!\n");
    return 0;
}