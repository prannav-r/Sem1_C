#include <stdio.h>
#include <stdbool.h>

int sum() {
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;      
    printf("%d + %d = %d\n", number1, number2, sum);
    return 0;
}

int sub() {
    int number1, number2, subt;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    subt = number1 - number2;      
    printf("%d - %d = %d\n", number1, number2, subt);
    return 0;
}

int mul() {
    int number1, number2, mult;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    mult = number1 * number2;      
    printf("%d * %d = %d\n", number1, number2, mult);
    return 0;
}

int div() {
    int number1, number2, mult;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    mult = number1 * number2;      
    printf("%d * %d = %d\n", number1, number2, mult);
    return 0;
}

int main() {
    int x;
    char n;
    while (x=true){
        printf("Simple Calculator Program\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice\n");
        scanf("%d",&x);
        if (x==1){
            sum();
        }
        else if(x==2){
            sub();
        }
        else if(x==3){
            mul();
        }
        else if(x==4){
            div();
        }
        else{
            printf("Invalid Choice!\n");
        }
        printf("Do you want to run the program again?(y/n)");
        scanf("%s",&n);
        if (n=='y'){
            continue;
        }
        else{
            printf("Thank you for using the program!");
            break;
        }
    }
}