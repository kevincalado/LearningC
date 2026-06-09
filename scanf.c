#include<stdio.h>
void main (void){
    int idade;
    float nota;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    printf("Qual sua nota?\n");
    scanf("%f", &nota);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f", nota);
}