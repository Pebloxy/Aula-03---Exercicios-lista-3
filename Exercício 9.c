/*
9. Validação de Troco
Leia o valor de uma compra e o valor pago pelo cliente. Se o valor pago for menor que a compra, 
imprima "Erro: Dinheiro insuficiente" (similar à lógica de divisão segura). Caso contrário, calcule e imprima o troco.
*/

#include <stdio.h>

int main() {
    int valorCompra = 0;
    int valorComDesconto = 0;
 
 printf( "Olá seja bem vindo ao nosso site.\n" );
 printf( "Digite o valor total de sua compra e ganhe um desconto: " );
 
 scanf( "%d", &valorCompra );
 
 if (valorCompra < 0){
    printf("Digite um valor válido \n");
 } else if (valorCompra >= 100){
    valorComDesconto = (valorCompra - 10);
     printf("Você ganhou um desconto de R$10 \n");
     printf("Valor total: R$%d\n", valorComDesconto);
 } else{
     printf("Desconto não disponível \n");
     printf("Valor total: R$%d\n", valorCompra);
 }
    return 0;
}