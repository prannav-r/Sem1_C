#include<stdio.h>

int main()
{
	 int num1, num2, hcf, lcm, i;
	 char ch;
	 printf("Enter first number: ");
	 scanf("%d", &num1);
	 printf("Enter second number: ");
	 scanf("%d", &num2);
	 for(i=1; i<=num1; i++)
	 {
		  if(num1%i==0 && num2%i==0)
		  {
		   	hcf = i;
		  }
	 }
	 /* Finding LCM */
	 lcm = (num1 * num2)/hcf;
	 printf("HCF = %d and LCM = %d\n", hcf, lcm);
}     