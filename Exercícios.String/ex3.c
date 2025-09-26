/*Faça um programa que leia uma string e verifique se ela é um palíndromo (ex: "arara", "ana", "reviver")*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[50];
    int n, i;
    bool palindromo = true;

    printf("Digite uma string: ");
    scanf(" %[^\n]", str);

    n = strlen(str);
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    if (palindromo) printf("'%s' eh palindromo.\n", str);
    else printf("'%s' nao eh palindromo.\n", str);

    return 0;
}
