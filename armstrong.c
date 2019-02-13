/*  Juval Raj
	CS-B S2
	13-2-019 */


#include<stdio.h>
int main()
{
	int num,dig,arm=0,num1;
	printf("Enter an integer number");
	scanf("%d",&num);
	num1=num;
	while(num>0)
		{
		dig=num%10;
		arm=arm+dig*dig*dig;
		num=num/10;
		}
	if(num1==arm)
		printf("%d is an amstrong number\n",num1);
	else
		printf("%d is not an amstrong number\n",num1);

}
