#include <stdio.h>

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
        fprintf(fp,"%d",roll);
        printf("Enter name of student %d :",i+1);
        scanf("%s",&name);
        fprintf(fp,"%s",name);
    }
}