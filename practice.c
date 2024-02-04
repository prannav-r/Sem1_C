#include <stdio.h>
#include <math.h>
#define A 10
#define DIV(a,b) (a/b)

int swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
    printf("%d %d",*x,*y);

}
int main(){
    /*int a,n,b,c,i,j;
    printf("Enter the array size:");
    scanf("%d",&n);
    int x[n];
    for (a=0;a<n;a++){
        printf("Enter element %d:",a+1);
        scanf("%d",&x[a]);
    }
    printf("Array Entered Successfully\n");
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if (x[j]>x[i]){
            b=x[j];
            x[j]=x[i];
            x[i]=b;
           }
        }
    }
    printf("Descending Order:\n");
    for (i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    printf("Enter the number to search:");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if (x[i]==b){
            printf("Number found at index %d",i);
            break;
        }
        else if(i==n-1){
            printf("Number not found");
        }
    }*/
    /*int a=10,b=20;
    swap(&a,&b);
    printf("%d %d\n",a,b);*/
    /*struct student
    {
        int rollno;
        char name[15];
        int marks;
    };
    struct student s={1,"Pr",100};
    struct student *ptr=&s;
    printf("%d\n%s\n%d",ptr->rollno,ptr->name,ptr->marks);*/
   /* union student{
        int rollno;
        char name;
        int marks;
    };
    union student a,*ptr;
    ptr=&a;
    a.rollno=10;
    a.marks=90;
    a.name='a';
    #ifdef A
    printf("%d %d %c\n",a.rollno,a.marks,(*ptr).name);
    #else
    printf("%d\n",a.name);
    #endif
    printf("%d\n",DIV(20,10));*/
    /*float a;
    float x;
    int y;
    x=10.23;
    y=2;
    a=(int)x+y;
    printf("%f",a);*/
}