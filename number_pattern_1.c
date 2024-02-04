#include <stdio.h>

int main(){
    int n,a=1,i,j,k;
    printf("Enter the Number of rows:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}