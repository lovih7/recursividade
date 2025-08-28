/*Escreva um subprograma recursivo que receba como entrada um string contendo a
sequência de resultados de um time e calcule a sua pontuação, considerando que V
representa vitória e vale 3 pontos, E representa empate e vale um ponto e D
representa derrota e não vale qualquer ponto. Por exemplo, se a entrada do
programa for VVVEEDDVED, a pontuação do time é 15.*/

#include <stdio.h>
#include <string.h>

int calcular_pontuacao(char *resultados, int indice) {
    if (indice < 0) {
        return 0;
    }
    int pontos = 0;
    if (resultados[indice] == 'V') {
        pontos = 3;
    } else if (resultados[indice] == 'E') {
        pontos = 1;
    }
    return pontos + calcular_pontuacao(resultados, indice - 1);
}

int main() {
    char resultados[] = "VVVEEDDVED";
    int pontuacao = calcular_pontuacao(resultados, strlen(resultados) - 1);
    printf("A pontuação do time é: %d\n", pontuacao);
    return 0;
}