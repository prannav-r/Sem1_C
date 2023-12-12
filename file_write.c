#include <stdio.h>

int main(){
    FILE *fp;
    char s[]="I am Prannav";
    int a=422;
    fp=fopen("hi.txt","w");
    fprintf(fp,"%s %d",s,a);
    fclose(fp);
}