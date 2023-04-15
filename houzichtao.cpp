//
// Created by Lenovo on 2023/4/15.
//
#include <stdio.h>
int taozi(int num1){
    int num,n;
    num = num1;
    n=2*(num+2);
    return n;
}
int main(){
    int peach=2,day = 9;
    while(day!=0){
        taozi(peach);
        peach = taozi(peach);
        day = day - 1;
    }
    printf("第一天猴子摘下了%d个桃子",peach);
    return 0;
}

