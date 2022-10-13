//
//  c 수행 문제11번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main(void){
    int i, j;
    
    for(i=1;i<=9;i++){
        for(j=2;j<=5;j++){
            printf("%2d * %2d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=9;i++){
        for(j=6;j<=9;j++){
            printf("%2d * %2d = %2d\t", j, i, i*j);
        }
        printf("\n");
    }
}
