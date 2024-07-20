#include <stdio.h>
#include <stdlib.h>

union lang{
    int hindi,tamil,french;
};

union extra{
    int bio,cs;
};

struct student{
    int id;
    int eng,math,phy,chem;
    union lang l;
    union extra e;
};

int main(){
    int n;
    char lan[100],ex[100];
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student arr[n];
    for (int i=0;i<n;i++){
        printf("Enter Student id:");
        scanf("%d",arr[i].id);
        printf("Enter eng,math,phy,chem marks:");
        scanf("%d %d %d %d",arr[i].eng,arr[i].math,arr[i].phy,arr[i].chem);
        printf("Enter language subject and marks:");
        scanf("%s",&lan);
    }
    
}