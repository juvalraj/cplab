/*  Juval Raj
	CS-B S2
	13-2-019 */


#include<stdio.h>
int main()
{
	int num,dig,rev=0,num1;
	printf("Enter an integer number");
	scanf("%d",&num);
	num1=num;
	while(num>0)
		{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
		}
	if(num1==rev)
		printf("%d is a palindrome number\n",num1);
	else
		printf("%d is not a palindrome number\n",num1);

}
