/*Juval
  CS-B*/
#include<stdio.h>
void main()
{
	int num1,num2,num3,big;
	printf("Enter three integer numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	big=num1;
	if(num2>big)
		big=num2;
	if(num3>big)
		big=num3;
	printf("%d is greater",big);
}
