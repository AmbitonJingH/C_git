//
// Created by Lenovo on 2023/4/17.
//
#include<cstdio>
#include <cstring>
int main(){
    char *s = "a";
    int len = strlen(s);
    int count = 0;
    for(int i =len-1;i>=0;i--){
        if(s[i]!=' '){
            count = count + 1;
            if(s[i-1]==' ')
                break;
        }
    }
    printf("%d",count);
}

