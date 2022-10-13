//
//  c 수행 문제9번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main(){
    int i=1, j;
    while(i<=5){
        j=1;
        while(j<i){
            printf("0");
            j++;
        }
        printf("*\n");
        i++;
    }
}
