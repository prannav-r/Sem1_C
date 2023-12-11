#include<stdio.h>

struct student{
    int roll;
    char name[100];
    int marks;
};

int main(){
    int i,n,t;
    printf("Enter the Number of Students:");
    scanf("%d",&n);
    t=n-1;
    struct student s[t];
    for (i=0;i<n;i++){
        printf("Student %d details\n",i+1);
        printf("Enter Student roll no :");
        scanf("%d",&s[i].roll);
        printf("Enter Student Name :");
        scanf("%s",&s[i].name);
        printf("Enter Student Marks :");
        scanf("%d",&s[i].marks);
    }
    printf("Details Entered Successfully!\n");
    printf("Student Markslist\n");
    printf("Roll No\t Name\t Marks\t\n");
    for (i=0;i<n;i++){
        printf("%d \t%s \t%d",s[i].roll,s[i].name,s[i].marks);
        printf("\n");
    }
}