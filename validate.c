#include<stdio.h>
int main()
{
    int n  , i , j=1;
    char a , b , c , d;
    scanf("%d",&n);
    if(n>0)
        scanf(" %c%c",&a,&b);
    for(i=1;i<n;i++)
    {
        scanf(" %c%c",&c,&d);
        //printf("%c%c \n" ,c ,  d);
        if(c==a && d==b)
        {
            j = 0;
        }
        a=c;
        d=b;
    }
    if(!j) printf("Invalid");
    else printf("valid");
}
