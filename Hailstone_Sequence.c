#include <stdio.h>

int main(){
    int N,j,k,num;
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Hailstone Sequence:");
    printf("%d,",N);
    while (N!=1){
            if (N%2==0){
                N=N/2;
                printf(" %d, ",N);
            }
            else{
                N=3*N+1;
                printf(" %d,",N);
            }
}
}