//
//  1064.cpp
//  C
//
//  Created by Hyun Seo Jung on 2022/08/10.
//

#include "1064.hpp"
int main(){
    int a,b,c;
    scanf(" %d %d %d", &a, &b, &c);
    printf("%d", (a<b?a:b)<c?(a<b?a:b):c);
}
