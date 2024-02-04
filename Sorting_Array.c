#include<stdio.h>
int ch;

int main(){
    while(1){
    int i,j,N,k,r;
    printf("Enter the Number of elements in the array:");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    for (j=0;j<N;j++){
        for(k=j+1;k<N;k++){
            if (a[j]>a[k]){
                r=a[j];
                a[j]=a[k];
                a[k]=r;
            }
        }
        }
    printf("Sorted Array: ");
    for (k=0;k<N-1;k++){
        printf("%d, ",a[k]);
    }
    printf("%d\n",a[N-1]);
    char x;
    printf("Do you want to run again?(y/n)");
    scanf("%s",&ch);
    if (ch=='y'){
      continue;
    }
    else{
      break;
    }
  }
}