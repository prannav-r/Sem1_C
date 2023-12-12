#include <stdio.h>

int main(){
    FILE *fp;
    fp=fopen("hi.txt","r");
    char str[100];
    while(!feof(fp)){
    fgets(str,90,fp);
    printf("%s",str);
    }
    fclose(fp);
}