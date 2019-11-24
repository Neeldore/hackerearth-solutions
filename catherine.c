#include<stdio.h>

int main()
{
    int n , k , a=0  , b , i  , arr[100] , m=0;
    scanf("%d%d", &n,&k);
    if(k>=n)
    {
        printf("invalid");
        return 0;
    }
    if(n<=0) return 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] >100)
        {
        printf("invalid");
        return 0;
        }
    }
    a = arr[0];
    for(i=1;i<k+1;i++)
    {
        b = arr[i];
        if(a >= b) arr[i]='\0';
        else {
        arr[i-1]='\0';
        a = b;
        }
    }
    for(i=0;i<n;i++)
        if(arr[i])
        printf("%d \n",arr[i]);
}

