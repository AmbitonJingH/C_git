//
// Created by Lenovo on 2023/4/24.
//
#include <stdio.h>
void hanoi(int n,char a,char b,char c){
    if(n>0){
        hanoi(n-1,a,c,b);
        printf("��%d�����Ӵ�%c�Ƶ�%c\n",n,a,b);
        hanoi(n-1,c,b,a);
    }
}
int main(){
    int n;
    char a ='A',b='B',c='C';
    printf("���������ӵĸ�����");
    scanf("%d",&n);
    hanoi(n,a,b,c);

    return 0;
}
