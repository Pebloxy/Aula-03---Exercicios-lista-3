/*
7. Validação de Mês
Crie um código que leia um número inteiro representando um mês. 
Verifique se o número está dentro do intervalo entre 1 e 12 usando o operador lógico && (E). 
Imprima "Mês válido" ou "Mês inválido".
*/

#include <stdio.h>

int main() {
    int mes = 0;
    do {
        printf("Digite o número do mês (1 a 12): ");
        scanf("%d", &mes);

        if (mes >= 1 && mes <= 12) {
            printf("Mês válido!\n");
        } else {
            printf("Mês inválido! Digíte novamente.\n\n");
        }
    } while (mes < 1 || mes > 12);
    printf("\nPrograma encerrado. Até logo!\n");
    return 0;
}