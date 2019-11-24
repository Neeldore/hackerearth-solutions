#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char i , j;
    scanf("%c%c",&i,&j);
    if(isalpha(i) || isalpha(j)){ printf("Invalid Input" ); return 0;}
    if(i=='1' || i=='6' || i=='8' || i=='9' || i=='0'  )
        if(j=='1' || j=='6' || j=='8' || j=='9' || j=='0')
        {
            printf("YES");
            exit(0);
        }
    printf("NO");
}
