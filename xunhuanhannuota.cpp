//
// Created by Lenovo on 2023/4/24.
//
#include <stdio.h>
#include <string.h>
bool isPalindrome(char  s[]) {
//    char s[100] = "A man, a plan, a canal: Panama";
    int n = strlen(s), m, i = 0, temp = 0, top = 0;
    char a[200000];
    for (i = 0; i < n; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z'))
        {

            a[top] = s[i] + 32;
            top = top + 1;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            //top++;
            a[top] = s[i];
            //top++;
            top = top + 1;
        }
    }
    for (int j = 0; j < top; ++j) {
        printf("%c",a[j]);
    }
    //   m = strlen(a)-count;
    if (s[0] == ' ')
        return true;
    for (i = 0; i < (top - 1) / 2; i++) {
        if (a[i] != a[top - i - 1])
            return false;
    }
    return true;
}

int main(){
    char s[100] = "A man, a plan, a canal: Panama";
    printf("%s",isPalindrome(s));
    return 0;
}
