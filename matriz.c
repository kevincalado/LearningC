#include <stdio.h>
int main(){
    int n, i, j;
    printf("Qual o tamanho da tabela?\n");
    scanf("%d", &n);
    float matriz[n][n];
    printf("\nDigite os valores:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    return 0;
}