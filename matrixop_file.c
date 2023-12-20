#include <stdio.h>

int main(){
    FILE *fp,fp1;
    int i,n,x;
    fp=fopen("matrix.txt","w");
    int matr[3][3],res[3][3];
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter element row %d column %d:",i+1,j+1);
            scanf("%d",&matr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        if(i!=0){
            fprintf(fp, "\n");
        }
        for (int j=0;j<3;j++){
             fprintf(fp,"%d ",matr[i][j]);
        }
    }
    fclose(fp);
    fp=fopen("matrix.txt","r");
    for(i=0;i<3;i++){
        if(i!=0){
            fseek(fp,1,SEEK_CUR);
        }
        for(int j=0;j<3;j++){
           fscanf(fp,"%d",res[i][j]);
           fseek(fp,1,SEEK_CUR);
    }
}
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Matrix \n %d",res[i][j]);
        }
    }
    fclose(fp);
}