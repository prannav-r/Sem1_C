#include <stdio.h>

int main(){
    FILE *fp;
    fp=fopen("hi.txt","r");
    int x=0;
    char ch;
    while(!feof(fp)){
        ch=fgetc(fp);
        if (ch=='\n'){
            x+=1;
        }
    }
    printf("Number of lines : %d",x+1);
    fclose(fp);
}