//
// Created by Lenovo on 2023/4/21.
//
#include <stdio.h>
float sum(int low,int high,float arr[])
{
    int mid;
    if(low==high)
    {
        return arr[low];
    }
    else if(low==high-1)
    {
        return arr[low]+arr[high];
    }
    else
    {
        mid =(low+high)/2;
//        sum(low,mid,arr);
//        sum(mid+1,high,arr);
        return sum(low,mid,arr)+sum(mid+1,high,arr);
    }
}
int main()
{
    int n,i=0;
    float arr[1000];
    float sum1;
    printf("���������ݵĸ�����");
    scanf("%d",&n);
    printf("������%d������",n);
    for(i = 0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    sum1 =  sum(0,n-1,arr);
    printf("%f",sum1);


}
