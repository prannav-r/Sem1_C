#include <stdio.h>
#include <string.h>

int main(){
    char x[100],y[100];
    int a=0,b,c,z;
    gets(x);
    gets(y);
    for (int i=0;i<strlen(x);i++){
        if (x[i]==' '){
            b=i;
            a++;
        }
    }
    printf("%d",a);
}