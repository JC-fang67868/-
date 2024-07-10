#include <stdio.h>
int main()
{
int a,b,c,max;
printf("请输入三个数：\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
    max=a;
}
else
max=b;
if(c>max)
{
    max=c;
}
printf("最大数为:%d",max);
    return 0;
}