/*
3. Autenticação de PIN
Escreva um código que simule uma tela de bloqueio. 
O programa deve pedir uma senha numérica e verificar se ela é igual a 9999. 
Se for, imprima "Celular Desbloqueado". Se não for, imprima "PIN Incorreto".
*/

#include <stdio.h>

int main() {
    int pin = 0;
    int pinRegistrado = 9999;
    int tentativas = 4;

    do {
        printf("Bem-vindo de volta, digite sua senha:\n ");
        scanf("%d", &pin);

        if (pin == pinRegistrado) {
            printf("Celular Desbloqueado!\n");
            break; 
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("PIN Incorreto. Você ainda tem %d tentativa(s).\n", tentativas);
            } else {
                printf("PIN Incorreto. Celular Bloqueado!\n");
            }
        }
    } while (pin != pinRegistrado && tentativas > 0);

    return 0;
}