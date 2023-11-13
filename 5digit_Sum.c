#include <stdio.h>

int main(){
    int x,sum=0;
    printf("Enter any 5 digit number:\n");
    scanf("%d",&x);
    do{
      sum+=x%10;
      x/=10;
    }
    while(x!=0);
    printf("Sum = %d",sum);
}