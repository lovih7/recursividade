/*Escreva um subprograma recursivo que receba como entrada um string contendo a
sequência de resultados de um time e calcule a sua pontuação, considerando que V
representa vitória e vale 3 pontos, E representa empate e vale um ponto e D
representa derrota e não vale qualquer ponto. Por exemplo, se a entrada do
programa for VVVEEDDVED, a pontuação do time é 15.*/

#include <stdio.h>
#include <string.h>

int calcular_pontuacao(char *resultados, int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    int pontos = 0;
    switch (resultados[tamanho - 1]) {
        case 'V':
            pontos = 3;
            break;
        case 'E':
            pontos = 1;
            break;
        case 'D':
            pontos = 0;
            break;
    }
    return pontos + calcular_pontuacao(resultados, tamanho - 1);
}

int main() {
    char resultados[] = "VVVEEDDVED";
    int pontuacao = calcular_pontuacao(resultados, strlen(resultados));
    printf("A pontuação do time é: %d\n", pontuacao);
    return 0;
}