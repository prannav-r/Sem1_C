#include <stdio.h>
#include <stdbool.h>

int fact(){
    int x;
    int z=1;
    printf("Enter the number: ");
    scanf("%d", &x);
    int i;
    for (i=1; i<=x; i++){
        z = z*i;
    }
    printf("The factorial is: %d\n", z);
}

int main(){
    while(1){
        fact();
        char x;
        printf("Do you want to run again?(y/n)");
        scanf("%s",&x);
        if (x=='y'){
            continue;
        }
        else{
            break;
        }
    }
}