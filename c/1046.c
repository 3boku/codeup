#include <stdio.h>

int main(){
    int a, b, c, f;
    float d;
    scanf(" %d %d %d", &a, &b, &c);
    f=a+b+c;
    d=(float)f/3.0;
    printf("%d\n", f);
    printf("%.1f\n", d);
}
