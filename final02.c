#include <stdio.h>

const int ordem = 3;

int main(){
    int matriz[ordem][ordem];

    printf("Preencha a matriz abaixo:\n");
    for(int i = 0;i < ordem;i++){
        for(int j = 0;j < ordem;j++){
            printf("%d/%d...::",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }


    for(int linha = 0;linha < ordem;linha++){
        printf("Linha [%d] = ",linha+1);
        for(int j = 0;j < ordem;j++){
            if(matriz[linha][j] % 2 == 0){
                printf("[%2d]___par",matriz[linha][j]);
            } else {
                printf("[%2d]_impar",matriz[linha][j]);
            }
            if(j < ordem - 1){
                printf(" | ");
            }
        }
        printf("\n");
    }
}