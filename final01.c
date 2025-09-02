#include <stdio.h>

const int max = 50;

int enesimo_primo(int N){
    int eh_primo = 0, contador = 0;

    for(int i = 2;i <= max;i++){
        eh_primo = 0;
        for(int k = 1;k <= i;k++){
            if(i % k == 0){
                eh_primo++;
            }
        }
        if(eh_primo == 2){
            contador++;
            if(contador == N){
                return i;
            }
        }
    }
}

int main() {
    int N;

    printf("Digite um numero positivo abaixo:\n....::");
    scanf("%d", &N);

    int eh_primo = 0, contador = 0;
    for(int i = 2;i < max;i++){
        eh_primo = 0;
        for(int k = 1;k <= i;k++){
            if(i % k == 0){
                eh_primo++;
            }
        }
        if(eh_primo == 2){
            contador++;
            if(contador == N){
                printf("O %dº numero primo: %d\n", N, i);
            }
        }
    }

    printf("\n\nCom funçao:\n %d = %d",N, enesimo_primo(N));
    
}
