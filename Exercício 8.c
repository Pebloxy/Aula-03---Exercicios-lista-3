/*
8. Classificação Etária
Faça um programa que leia a idade de uma pessoa. Use if e else if para imprimir a categoria:

Menor que 12: "Criança"

De 12 a 17 anos (menor que 18): "Adolescente"

18 ou mais: "Adulto"
*/

#include <stdio.h>

int main() {
    int idade = 0;
    char continuar; 
    do {
        printf("Entre com sua idade e eu lhe direi\n");
        printf("sua classificação etária: ");
        
        scanf("%d", &idade);
        
        if (idade < 12){
            printf("Criança\n");
        } else if (idade >= 12 && idade < 18){
            printf("Adolescente\n");
        } else {
            printf("Adulto");
        }
        printf("\nDigitou a idade errada? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    printf("\nPrograma encerrado.\n");
    return 0;
}