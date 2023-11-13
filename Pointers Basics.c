//Understanding Pointers in C
#include <stdio.h>

int main(){
    int x=10;
    int *pX = &x;
    printf("%d\n",x);
    printf("%p\n",pX);
}