#include <stdio.h>
#include <string.h.>

int line(char fna[50]){
    int x=0;
    FILE *fp;
    fp=fopen(fna,"r");
    char data;
    while(!feof(fp)){
    data=fgetc(fp);
    if (data=='\n'){
        x+=1;
    }
    }
    printf("Number of lines = %d\n",x);
    fclose(fp);
}

int word(char fna[20]){
    int i,x=0;
    FILE *fp;
    fp=fopen(fna,"r");
    char data;
    while(!feof(fp)){
    data=fgetc(fp);
    if (data=='\n'||' '){
        x+=1;
    }
    }
    printf("Number of words = %d\n",x);
    fclose(fp);
}

int main(){
    char fname[100];
    int ch;
    while(1){
        printf("Main Menu\n1.Line Count\n2.Word Count\n3.Exit\nEnter your choice:");
        scanf("%d",&ch);
        if (ch==1){
           printf("Enter the name of file:");
           scanf("%s",&fname);
           line(fname);
        }
        else if(ch==2){
           printf("Enter the name of file:");
           scanf("%s",&fname);
           word(fname);
        }
        else if(ch==3){
            break;
        }
    }
}