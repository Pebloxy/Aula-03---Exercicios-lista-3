/*
10. Ano Bissexto Simples
Sabendo que anos bissextos ocorrem de 4 em 4 anos, escreva um programa que leia um ano e verifique se ele é múltiplo de 4. 
Se for, imprima "Pode ser ano bissexto". Se não for, imprima "Não é ano bissexto"
*/

#include <stdio.h>

int main() {
    int ano = 0;
    char continuar;
    do {
        printf("Digite um ano: ");
        scanf("%d", &ano);
        if (ano % 4 == 0) {
            printf("Pode ser ano bissexto\n");
        } else {
            printf("Não é ano bissexto\n");
        }
        printf("\nDeseja testar outro ano? (S/N): ");
        scanf(" %c", &continuar);
        printf("\n");
    } while (continuar == 'S' || continuar == 's');
    printf("Programa encerrado!\n");
    return 0;
}