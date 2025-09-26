/*Faça um programa que lê uma string de até 10 caracteres e inverta-os. No final o programa deverá imprimir a
string original e a invertida*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[11], inv[11];
    int n;

    printf("Digite uma string (max 10): ");
    scanf(" %[^\n]", str);

    n = strlen(str);
    for (int i = 0; i < n; i++) {
        inv[i] = str[n - 1 - i];
    }
    inv[n] = '\0';

    printf("Original: %s\nInvertida: %s\n", str, inv);
    return 0;
}
