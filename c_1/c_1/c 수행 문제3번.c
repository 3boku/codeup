//
//  c 수행 문제3번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main(){
    int i, j;
    
    for(i=1;i<=5;++i){
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;--i){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
