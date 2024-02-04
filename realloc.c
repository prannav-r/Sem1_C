#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,*ptr;
    printf("Enter number of elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("The values are:\n");
    for (i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    printf("Enter new no of elements:");
    scanf("%d",&n);
    int *ptr1;
    ptr1=(int*)realloc(ptr,n*sizeof(int));
    for (i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
    free(ptr1);
}