/*
2. Verificação de Direito a Voto
Crie um programa que leia a idade de uma pessoa. Use a instrução if para verificar se a pessoa tem 16 anos ou mais. 
Se tiver, imprima "Você já pode votar". Caso contrário, imprima "Você ainda não pode votar"
*/

#include <stdio.h>

int main() {
    int num1 = 0; 
    char continuar;
    do {
        printf("Entre com sua idade e eu lhe direi\n");
        printf("se você pode votar ou não: ");
 
        scanf("%d", &num1 );
 
        if (num1 >= 16){
            printf("Você já pode votar!\n");
        } else{
            printf("Você ainda não pode votar\n");
        }
        printf("\nDigitou a idade errada? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
    printf("\nPrograma encerrado. Boa votação!\n");
    return 0;
}