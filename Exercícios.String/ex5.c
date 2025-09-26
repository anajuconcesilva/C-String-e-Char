/*Elabore um programa que leia um nome completo de até 100 caracteres e imprima as iniciais deste
nome. Exemplo: João Carlos Nascimento da Silva, será impresso JCNDS*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[101];
    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);

    printf("Iniciais: ");
    if (nome[0] != ' ') printf("%c", nome[0]);

    for (int i = 1; nome[i] != '\0'; i++) {
        if (nome[i - 1] == ' ' && nome[i] != ' ') {
            printf("%c", nome[i]);
        }
    }
    printf("\n");
    return 0;
}
