#include <stdio.h>

int main(){
    int N,i,j,k,num;
    scanf("Enter the value of N:",&N);
    printf("Hailstone Sequence:")
    while (N!=1){
        printf("%d,",N);
            if (i%2==0){
                N=N/2;
                printf(" %d, ",N);
            }
            else{
                N=3*N+1;
                printf(" %d,",N);
            }
}
}