/*
7. Validação de Mês
Crie um código que leia um número inteiro representando um mês. 
Verifique se o número está dentro do intervalo entre 1 e 12 usando o operador lógico && (E). 
Imprima "Mês válido" ou "Mês inválido".
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
    int num2 = 0;
    int num3 = 0;
 
 printf( "Entre com três inteiros e eu lhe direi\n" );
 printf( "qual o maior: " );
 
 scanf( "%d%d%d", &num1, &num2, &num3);
 
 if (num1 > num2){
     if (num1 > num3){
     printf("O maior numero é o %d\n", num1);
     } else {
     printf("O maior numero é o %d\n", num3);
     }
 } else {
    if (num2 > num3){
     printf("O maior numero é o %d\n", num2);
     } else {
     printf("O maior numero é o %d\n", num3);
     }
 }
    return 0;
}