#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct railway{
    int no;
    float date;
    int seats;
};

struct railway t1={126001,20.11,100};
struct railway t2={126002,21.11,100};

void filewrite(){
    FILE *fp1;
    fp1=fopen("trains.txt","w");
    fprintf(fp1,"%d %d %d",t1.no,t1.date,t1.seats);
    fprintf(fp1,"%d %d %d",t2.no,t2.date,t2.seats);
    fclose(fp1);
}

void bookticket(int date,int seats){
    fp1=fopen("trains.txt","r+");
}

int main(){
    int date,seats;
    printf("Enter the date:");
    scanf("%d",date);
    printf("Enter the number of seats:");
    scanf("%d",&seats);
    bookticket(date,seats);
}