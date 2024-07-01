#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d\n%d", &a, &b);
    e = b % 10; // 일의자리
    d = (b / 10) % 10; // 십의자리
    c = (b / 100) % 10; // 백의자리

    printf("%d\n", a * e);
    printf("%d\n", a * d);
    printf("%d\n", a * c);
    printf("%d\n", a * b);
}