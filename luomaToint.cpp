//
// Created by Lenovo on 2023/4/9.
//
#include<cstdio>
#include <cstring>
int romanToInt(char * s){
    int n,i,sum=0;
    n = strlen(s);
    int temp[n];
    for (i = 0; i < n; i++) {
        switch (s[i]) {
            case 'I':
                temp[i] = 1;
                break;
            case 'V':
                temp[i] = 5;
                break;
            case 'X':
                temp[i] = 10;
                break;
            case 'L':
                temp[i] = 50;
                break;
            case 'C':
                temp[i] = 100;
                break;
            case 'D':
                temp[i] = 500;
                break;
            case 'M':
                temp[i] = 1000;
                break;
        }
    }
        for (i = 0; i < n-1; i++) {
            if(temp[i]<temp[i+1])
                sum = sum -temp[i];
            else
                sum = sum + temp[i];
        }
        sum = sum + temp[n-1];
        return sum;
    }
int main(){
    char s[15];
    int  a;
    scanf("%s",s);
    a = romanToInt(s);
    printf("%d",a);
    return 0;
}
