//
//  c 수행 예제5번.c
//  c_1
//
//  Created by Hyun Seo Jung on 2022/10/13.
//

#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    
    printf("합을 구할 마지막 수 입력: ");
    scanf(" %d", &n);
    
    while(i>=n){
        sum+=i;
        i++;
    }
    printf("1부터 %d까지의 합은 %d입니다.", n, sum);
}
