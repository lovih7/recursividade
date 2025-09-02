#include <stdio.h>

int soma(int n){
    if(n == 0){
        return 0;
    }
    return n % 10 + soma((n / 10));
}

int main(){
    int N = 22;
    printf("%d",soma(N));
}