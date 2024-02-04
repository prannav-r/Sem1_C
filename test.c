#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,*ptr;
    printf("Enter value of n:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    /*for (i=0;i<n;i++){
        printf("Enter value of number %d:",i+1);
        scanf("%d",ptr+i);
    }*/
    printf("The Values are:\n");
    for (i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    //printf("%d\n",*ptr);
    free(ptr);
    //printf("%d",*ptr);
}