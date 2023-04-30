//
// Created by Lenovo on 2023/4/30.
//
#include <stdio.h>
int a[1000][1000]={0};;
int main(){
    int i,j,n,m,count=0;
    printf("«Î ‰»În£¨mµƒ÷µ£∫");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        a[i][0]=1;
        a[i][i+1]=1;
    }
    for(i=1;i<n;i++) {
        for (j = 1;j<n; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    printf("%d",a[n-1][m]);
    return 0;
}