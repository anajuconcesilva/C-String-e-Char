/*Elabore um programa que leia uma um caractere e uma string de, no máximo, 20 caracteres e, no final,
imprime quantas vezes o caractere digitado aparece nessa string*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[21], c;
    int cont = 0;

    printf("Digite uma string (max 20): ");
    scanf(" %[^\n]", str);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) cont++;
    }

    printf("O caractere '%c' aparece %d vezes na string \"%s\".\n", c, cont, str);
    return 0;
}
