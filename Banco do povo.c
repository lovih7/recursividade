/*O Banco do Povo está realizando uma grande promoção em seus financiamentos.
Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação
corresponde a 20% do valor do empréstimo. Os valores das demais prestações
correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Com
base nestas informações, escreva um subprograma recursivo que receba como
entrada o valor do empréstimo, o número de parcelas e um número inteiro N entre 1 e
240 e calcule qual será o valor da parcela N do empréstimo.*/

#include <stdio.h>

float calcular_parcela(float valor_emprestimo, int num_parcelas, int n) {
    if (n == 1) {
        return valor_emprestimo * 0.2;
    }
    float parcela_anterior = calcular_parcela(valor_emprestimo, num_parcelas, n - 1);
    return parcela_anterior * 1.07;
}

int main() {
    float valor_emprestimo = 10000.0;
    int num_parcelas = 240;
    int n = 1;

    float valor_parcela = calcular_parcela(valor_emprestimo, num_parcelas, n);
    printf("O valor da parcela %d é: %.2f\n", n, valor_parcela);

    return 0;
}