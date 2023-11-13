#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int binary(){
    int x;
    printf("Enter the decimal: ");
    scanf("%d",&x);
    int y=x;
    char b;
    char z='\0';
    if (x<=1){
        printf("The binary equivalent is:","%d",x);
    }
    while (y>=2){
        char a=y/2;
        b=y%2;
        z+=b;
        y+=a;
    }
    printf("The binary equivalent is:","%c",z);
    return 0;
}

int main(){
    while(1){
    binary();
    char ch;
    printf("Do you want to run again?(y/n)");
    scanf("%c",ch);
    if (ch=='y'){
        continue;
      }
    else{
    break;
    }
}
}