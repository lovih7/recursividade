/*Escreva um subprograma recursivo que receba como entrada dois números inteiros x
e y e calcule o quociente (a parte inteira) da divisão de x por y. Para isso, não deve
ser usada a função div.*/

int quociente(int x, int y) {
    if (x < y) {
        return 0;
    }
    return 1 + quociente(x - y, y);
}

int main() {
    int x, y;
    printf("Digite dois numeros inteiros (x e y): ");
    scanf("%d %d", &x, &y);
    if (y == 0) {
        printf("Divisao por zero nao e permitida.\n");
    } else {
        printf("Quociente de %d por %d = %d\n", x, y, quociente(x, y));
    }
    return 0;
}
