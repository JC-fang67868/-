#include<stdio.h>
int main()
{
    int arr[3];
    printf("请输入三个数：\n");
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    
    int MAX=arr[0];
    if(arr[1]>MAX)
    {
    MAX=arr[1];
    }
    if(arr[2]>MAX)
    {
        MAX=arr[2];
    }
    printf("最大值为：%d\n",MAX);
    return 0;
}