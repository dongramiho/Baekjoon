#include <stdio.h>

int main(){
    int N, A, B, i;
    scanf("%d", &N);
    for(i = 1; i < N + 1; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);   
    }
}