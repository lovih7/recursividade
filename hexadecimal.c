/*Escreva um subprograma recursivo que receba como entrada um valor em decimal e
imprima o seu valor correspondente em hexadecimal.*/

#include <stdio.h>

void imprimeHexadecimal(int decimal) {
    if (decimal == 0) {
        return;
    }
    imprimeHexadecimal(decimal / 16);
    int resto = decimal % 16;
    if (resto < 10) {
        printf("%d", resto);
    } else {
        printf("%c", resto - 10 + 'A');
    }
}

int main() {
    int decimal;
    printf("Digite um valor em decimal: ");
    scanf("%d", &decimal);
    printf("Valor em hexadecimal: ");
    if (decimal == 0) {
        printf("0");
    } else {
        imprimeHexadecimal(decimal);
    }
    printf("\n");
    return 0;
}
