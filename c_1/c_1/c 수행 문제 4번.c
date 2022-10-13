//
//  c 수행 문제 4번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main( ){
    int n, a1=0, a2=1, a3, i;
    
    printf("몇번째 항까지 구할까요? ");
    scanf(" %d", &n);
    
    for(i=1;i<=n;i++){
        printf("%d ", a1);
        a3= a2+a1;
        a1 = a2;
        a2 = a3;
        
    }
}
