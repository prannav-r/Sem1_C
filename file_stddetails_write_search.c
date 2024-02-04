#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp=fopen("new.txt","w");
    int x,roll;
    char name[100];
    printf("Enter the number of students: ");
    scanf("%d",&x);
    for (int i =0;i<x;i++){
        printf("Enter roll no of student %d :",i+1);
        scanf("%d",&roll);
        fprintf(fp,"Roll No : %d\t",roll);
        printf("Enter name of student %d :",i+1);
        scanf("%s",&name);
        fprintf(fp,"Name of the Student : %s\t",name);
        if (i!=x-1){
        fprintf(fp,"%s","\n");}
    }
    fclose(fp);
    char search;
    char det[100];
    printf("Enter the roll no to search:");
    scanf("%s",&search);
    fp=fopen("new.txt","r");
    while(!feof(fp)){
        fgets(det,100,fp);
        for (int i=0;i!=strlen(det);i++){
            if (det[i]==search){
                printf("%s",det);
                break;
            }
        }
    }
    fclose(fp);
}