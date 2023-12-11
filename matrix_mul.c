#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,r1,r2,c1,c2,m1[100][100],m2[100][100],res[1000][1000],x=0;
    printf("Enter the number of rows and columns of 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter the number of rows and columns of 2nd matrix:");
    scanf("%d %d",&r2,&c2);
    printf("Enter elements of matrix 1\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter row %d column %d element",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter elements of matric 2\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter row %d column %d element",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    if (c1!=r2){
        printf("Multiplication not possible");
        exit(0);
    }
    for (i=0;i<c1;i++){
        for (j=i;j<r2;j++){
            x=

        }

    }






    
}