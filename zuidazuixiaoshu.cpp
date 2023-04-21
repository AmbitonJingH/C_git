//
// Created by Lenovo on 2023/4/21.
//
#include <stdio.h>
void quick_sort(int num[], int low, int high )
{
    int i,j,temp;
    int mid;

    i = low;
    j = high;
    mid = num[low];

    if(i > j)
    {
        return;
    }

    while(i != j)
    {
        while(num[j] >= mid && j > i)
        {
            j--;
        }

        while(num[i] <= mid && j > i)
        {
            i++;
        }

        if(j > i)
        {
            temp = num[j];
            num[j] = num[i];
            num[i] = temp;
        }
    }

    num[low] = num[i];
    num[i] = mid;

    quick_sort(num,low,i-1);
    quick_sort(num,i+1,high);
}

int main()
{
    int num[1000] ={0};
    int i,n;
    printf("请输入数据的个数：");
    scanf("%d",&n);
    printf("请输入%d个数：",n);
    for(i =0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    quick_sort(num, 0, n-1);
        printf(" %d %d %d %d ", num[0],num[1],num[n-2],num[n-1]);
    return 0;
}


