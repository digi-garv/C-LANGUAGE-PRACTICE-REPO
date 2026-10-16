#include<stdio.h>

int main()
{
    int n,a=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            a++;
        }
            
    }
    if(a==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}