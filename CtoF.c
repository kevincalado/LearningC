#include<stdio.h>
int main (){
    float c, f;
    printf("Qual a temperatura em Celsius? \n");
    scanf("%f", &c);
    f = ( 1.8 * c ) + 32;
    printf("A temperatura em Fahrenheit é %.2f F", f);
    return 0;
}