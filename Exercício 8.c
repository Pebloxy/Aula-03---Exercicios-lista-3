/*
8. Classificação Etária
Faça um programa que leia a idade de uma pessoa. Use if e else if para imprimir a categoria:

Menor que 12: "Criança"

De 12 a 17 anos (menor que 18): "Adolescente"

18 ou mais: "Adulto"
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
 
 printf( "Entre com sua nota e eu lhe direi\n" );
 printf( "se você foi aprovado ou não: \n" );
 
 scanf( "%d", &num1 );
 
 if (num1 > 100){
    printf("Digite uma nota válida \n");
 } else if (num1 < 0){
     printf("Digite uma nota válida \n");
 } else if (num1 < 60){
     printf("Reprovado \n");
 } else{
     printf("Aprovado \n");
 }
    return 0;
}