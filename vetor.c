#include <stdio.h>
int main(){
    int i, v[5];
    for( i=0 ; i < 5 ; i++ ){
        scanf("%d", &v[i]);
    }
    for(i=4;i>=0;i--){
        printf("%d\n", v[i]);
    }
    return 0;
}