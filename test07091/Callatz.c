#include <stdio.h>
#include <stdlib.h>
void Callatz(int n)
{
    int count=0;
    while (n!=1)
    {
        if(n%2==1)
        {
            n=(3*n+1)/2;
            count++;
        }
        else{
            n=n/2;
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    Callatz(n);
    return 0;
}