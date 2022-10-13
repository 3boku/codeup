//
//  c 수행 문제6번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main(){
    int a, b, temp, i;
    printf("*** 두 수 구간의 숫자 출력하기 ***\n");
    printf("두 수 입력: ");
    scanf(" %d %d", &a, &b);
    
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(i=a;i<=b;i++)
        printf("%d ", i);
    

}
