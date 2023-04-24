//
// Created by Lenovo on 2023/4/24.
//
#include <stdio.h>
void hanoi(int n,char a,char b,char c){
    if(n>0){
        hanoi(n-1,a,c,b);
        printf("把%d号盘子从%c移到%c\n",n,a,b);
        hanoi(n-1,c,b,a);
    }
}
int main(){
    int n;
    char a ='A',b='B',c='C';
    printf("请输入盘子的个数：");
    scanf("%d",&n);
    hanoi(n,a,b,c);

    return 0;
}
