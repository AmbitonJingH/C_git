//
// Created by Lenovo on 2023/4/9.
//

#include <stdio.h>
//#include <iostream>
//using namespace std;
bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    int a,b=0;
    a=x;
    while(a!=0){
        b=b*10+a%10;
        a/=10;
    }
    if(x==b)
        return true;
    else
        return false;
}
int main(){
    int x;
    bool a;
    scanf("%d",&x);
    a = isPalindrome(x);
    printf("%d",isPalindrome(x));

    return 0;
}