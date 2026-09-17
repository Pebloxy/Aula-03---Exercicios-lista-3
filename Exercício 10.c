/*
10. Ano Bissexto Simples
Sabendo que anos bissextos ocorrem de 4 em 4 anos, escreva um programa que leia um ano e verifique se ele é múltiplo de 4. 
Se for, imprima "Pode ser ano bissexto". Se não for, imprima "Não é ano bissexto"
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com um inteiro e eu lhe direi\n" );
 printf( "se ele está dentro do intervalo de 10 e 20: " );
 
 scanf( "%d", &num1 );

 if (num1 >= 10 && num1 <= 20){
     printf("Valor aceito \n");
 } else{
     printf("Valor inválido \n");
 }

 return 0;
}
