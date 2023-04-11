//
// Created by Lenovo on 2023/4/11.
//
#include <cstdio>
int removeDuplicates(int* nums, int numsSize){
    int i,j=0;
    for(i=1;i<numsSize;i++){
        if(nums[i]!=nums[j]){
            j = j + 1;
            nums[j] = nums[i];
        }
    }
    return j+1;
}
int main(){
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d",a[i]);
    }
    printf("%d",removeDuplicates(a,10));
}
