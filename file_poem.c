#include <stdio.h>
#include <string.h>

int write(char fna[100],char dat[100]){
        FILE *fp;
        fp=fopen(fna,"w");       
        fprintf(fp,"%s",dat);
        printf("Written Sucessfully\n");
        fclose(fp);
}

int read (char fna[100]){
    FILE *fp;
    fp = fopen(fna,"r");
    char s;
    while(!feof(fp)){
          s=fgetc(fp);
          printf("%c",s);
    }
    fclose(fp);
}

int main(){
    while(1){
        int ch;
        char data[100];
        char fname[100],x;
        printf("1.Write\n2.Read\n3.Exit\nEnter your choice:\n");
        scanf("%d",&ch);
        if (ch==1){
            printf("Enter Filename:");
            scanf("%s",fname);
            printf("Enter the data:");
            while (x!="."){
                scanf("%c",&x);
                
            }
            write(fname,data);
        }
        else if(ch=2){
            printf("Enter Filename:");
            scanf("%s",fname);
            read(fname);
        }
        else if(ch=3){
            break;
        }
    }
}