//
// Created by Lenovo on 2023/4/15.
//
#include <stdio.h>
int main(){
    int ma=100;
    int dama,zhongma,xiaomao;
    for(dama = 0;dama<33;dama++)
        for(zhongma = 0;zhongma<50;zhongma++){
            xiaomao = 100-dama-zhongma;
                    if(xiaomao%2==0&&3*dama+2*zhongma+(xiaomao/2)==100){
                        printf("大马的数量为：%d\n",dama);
                        printf("中马的数量为：%d\n",zhongma);
                        printf("小马的数量为：%d\n",xiaomao);
                        printf("\n");
                    }
        }
    return 0;
}

