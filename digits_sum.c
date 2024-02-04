#include <stdio.h>

int main(){
    int n,dig,count=0;
    printf("Enter no:");
    scanf("%d",&n);
    while(n!=0){
        dig=n%10;
        count+=dig;
        n=n/10;
    }
    printf("Sum of digits : %d",count);
}