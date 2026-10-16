#include <stdio.h>

int main()
{
    int a=0,b=1,n,sum;
    scanf("%d",&n);
    for(int i = 1;i <= n-1;i++){
        sum = a+b;
        a=b;
        b=sum;
        
    }
        printf("%d\n",a);
    
}