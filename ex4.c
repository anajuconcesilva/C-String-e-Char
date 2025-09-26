/* Faça um programa que leia o nome e sobrenome de uma pessoa. O programa deve escrever o nome e o
sobrenome numa única string. Deverá ser impresso:
o A string final (com nome e sobrenome).
o Seu tamanho;
o A primeira e a última letra da string.*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], completo[100];
    int n;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite o sobrenome: ");
    scanf(" %[^\n]", sobrenome);

    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    n = strlen(completo);

    printf("\nString final: %s\n", completo);
    printf("Tamanho: %d\n", n);
    printf("Primeira letra: %c\n", completo[0]);
    printf("Ultima letra: %c\n", completo[n - 1]);

    return 0;
}
