#include <stdio.h>

int main(){
    int n, a=10;
    
    printf("4자리수 입력: ");
    scanf(" %d", &n);
    
    do{
        printf("%d", n%a);
        n=n/10;
    }while(n!=n/10);
}
