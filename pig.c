#include<stdio.h>
int main()
{
    char org[1000] , chg[1000] , c;
    int i=1 ,j=0;
    fgets(org , 1000,stdin);
    while(org[j++] != '\n');
    org[--j]='\0';
    c=org[0];
    while(org[i])
    {
        if(org[i]==' ')
        {
            printf("%cay ",c);
            c=org[++i];
            i++;
        }
        else
            printf("%c", org[i++]);
    }
    printf("%cay",c);
}
