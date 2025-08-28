/*Escreva um subprograma recursivo que receba como entrada um número inteiro N
não negativo e imprima a saída mostrada abaixo. O exemplo abaixo considera que N é
igual a 5.
*****
****
***
**
*
*/

#include <stdio.h>

    /*PIRAMIDE DE 5 A 1*/
void impri_pira(int n) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    imprimir_estrelas(n - 1);
}
    /*PIRAMEDE 1 A 5*/
 void impri_pira_invertidas(int n) {
        if (n == 0) {
            return;
        }
        imprimir_estrelas(n);
        impri_pira_invertidas(n - 1);
    }


int main() {
    int N = 5;
    imprimir_estrelas(N);
    imprimir_estrelas(N);
    return 0;
}