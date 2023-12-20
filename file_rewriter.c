#include <stdio.h>

int main(){
    FILE *fp,*fp2;
    fp=fopen("hi.txt","r");
    fp2=fopen("bye.txt","w");
    int line=1,x,n;
    char ch[1000],new[1000],y;
    printf("Enter the line you want to replace:");
    scanf("%d",&x);
    printf("Enter the new line :");
    scanf("%s",new);
    while(!feof(fp)){
        y=fgetc(fp);
        if (y=='\n'){
            line+=1;
        }
        fputc(y,fp2);
        if (line==x){
            fputs(new,fp2);
            fputc("\n",fp2);
            fgets(ch,1000,fp);
            line++;
        }
    }
}