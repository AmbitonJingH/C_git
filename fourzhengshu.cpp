//
// Created by Lenovo on 2023/4/15.
//
#include <stdio.h>
int main(){
    int i,j,k,l,temp,sum,count=0;
    for ( i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if(i!=j){
                for (k = 0;k  < 10; k++) {
                    if(k!=j&&k!=i){
                        for (l = 0; l < 10; l++) {
                            if(l!=i&&l!=j&&l!=k){
                                sum = i*1000+j*100+k*10+l;
                                temp = (i+j+k+l)*(i+j+k+l);
                                if(sum%temp==0){
                                    printf("%d\n",sum);
                                    count = count +1;
                                }
                            }

                        }
                    }

                }
            }

        }

    }
    printf("总共%d个数",count);
    return 0;
}
