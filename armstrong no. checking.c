
//c code for armstrong no.

#include<stdio.h>
int main(){
    
    int n,sum =0,x,og;
    
    printf("enter a no.:");
    scanf("%d",&n);
    og = n;
    while(n!=0){
        x = n%10;
        n = n/10;
        sum = sum + (x*x*x);
        
    }
    if(sum == og){
    printf("%d is armstrong no.",og);
        
    }
    else{
        printf("%d is not",og);
    }
    
}
