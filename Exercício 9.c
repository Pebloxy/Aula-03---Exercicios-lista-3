/*
9. Validação de Troco
Leia o valor de uma compra e o valor pago pelo cliente. Se o valor pago for menor que a compra, 
imprima "Erro: Dinheiro insuficiente" (similar à lógica de divisão segura). Caso contrário, calcule e imprima o troco.
*/

#include <stdio.h>

int main() {
    int valorCompra = 0;
    int valorPago = 0;
    int troco = 0;
    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valorCompra);
    do {
        printf("Digite o valor fornecido pelo cliente: R$ ");
        scanf("%d", &valorPago);
        if (valorPago < valorCompra) {
            printf("Erro: Dinheiro insuficiente! Falta R$ %d.\n", valorCompra - valorPago);
            printf("Por favor, informe um valor maior ou igual a R$ %d.\n\n", valorCompra);
        }
    } while (valorPago < valorCompra);
    troco = valorPago - valorCompra;
    if (troco == 0) {
        printf("Pagamento exato! Não há troco a devolver.\n");
    } else {
        printf("Troco a ser devolvido: R$ %d\n", troco);
    }
    printf("\nPrograma encerrado!\n");
    return 0;
}