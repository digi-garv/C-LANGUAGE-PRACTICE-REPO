#include<stdio.h>
int main(){
    
    int n;
    printf("enter no. of student:");
    scanf("%d",&n);
    int marks[n];
    
    for(int i = 0;i <= n-1;i++){
        scanf("%d\n",&marks[i]);
    }
    
    for(int i = 0;i <= n-1;i++){
       if(marks[i]<35)
           printf("%d\n",i);
    }
        
    return 0;
}