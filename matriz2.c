#include<stdio.h>
void main (void){
    int n, i, j;
    printf("Qual o numero de n? \n");
    scanf("%d", &n);
    float A[n][n], TA[n][n], RA[n][n];
    printf("Preencha a matriz: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f", &A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.0f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            TA[j][i]=A[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.0f ", TA[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(i+j==n-1){
            RA[i][j]=A[i][j]+TA[i][j];
        }else{
            RA[i][j]=TA[i][j];
        }   
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.0f ", RA[i][j]);
        }
        printf("\n");
    }
}