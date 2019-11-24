#include<stdio.h>
int main(){
    int n , i=0 , j=0 , k=0 , l = 0 , m = 0 , x=0;
    char abc[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if(i==0 || i==n-1){
            k=0;
            abc[k] = 'M';
            abc[n-k-1] = 'M';
            for(x=k+1;x<(n-k-1);x++)
                abc[x]='F';
        }
        else{
            k=i;
            abc[0]='F';
            abc[n-1] = 'F';
            for(l=1;l<(n-1);l++)
                abc[l]='C';
            abc[k]='M';
            abc[n-k-1]='M';
        }
        for(m=0;m<n;m++)
            printf("%c " , abc[m]);
        printf("\n");
    }
}
