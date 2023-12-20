#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fact_recurv(int x){
    if (x==1){
        return 1;
    }
    else{
        return (x*fact_recurv(x-1));
    }
}

int fact_normal(int x){
    int y=x-1;
    while (x!=0){
        x=x*y;
        y--;
    }
    return (x);
}

int main(){
    int n,res;
    int ch;
    printf("Enter the number:");
    scanf("%d",&n);
    while(true){
        printf("\n1.Recursive\n2.Normal\n3.Exit\nEnter your choice:");
        scanf("%d",ch);
        if (ch==1){
           res=fact_recurv(n);}
        else if (ch==2){
            res=fact_normal(n);
        }
        else if(ch==3){
            break;
        }
        printf("%d",res);
    }
}