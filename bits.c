#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char list[10][10]={"Apples","Oranges","Grapes","Bananas"};
    int cost[4],i;

    for(i=0;i<=3;i++){
        printf("Enter the cost of %s:\n",list[i]);
        scanf("%d", &cost[i]);
    }
    printf("\nItem Details\n");
    for(i=0;i<=3;i++){
       printf("\%s:%d\n",list[i],cost[i]);
    }
    return 0;
}
