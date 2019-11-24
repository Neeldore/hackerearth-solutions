#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char abc[] , int n)
{
    int i=0 , j=0 , m=0, k=0;
    n--;
    char gmail[]="@gmail.com";
    char yahoo[] = "@yahoo.com";
    for(i=0;i<n;i++)
    {
        k=i;
        while((abc[k] == gmail[j]) && gmail[j]) {m++; k++;j++;}
        if(m==10)
        {
            return 1;
        }
        j=0;
    }
    j=0; m=0;k=0;
    for(i=0;i<n;i++)
    {
        k=i;
        while((abc[k] == yahoo[j]) && yahoo[j]){m++; k++;j++;}
        if(m==10)
        {
            return 1;
        }
        j=0;
    }
    return 0;
}

int main()
{
    char abc[100];
    fgets(abc , 100,stdin);
    if(check(abc , strlen(abc))) printf("Valid Mail Id");
    else printf("Provide a valid mail Id");
    return 0;
}
