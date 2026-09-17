#include<stdio.h>
int main(){
    
    int n,a=0,b=1,sum=0;
    printf("enter a no. :");
    scanf("%d",&n);
    
    // printf("%d\n",a);
    // printf("%d\n",b);

    for(int i=1;i<=n;i++){
        sum = a+b;
        printf("%d\n",a);
        a=b;
        b=sum;
    
}
    }