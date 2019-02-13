/*  Juval Raj
		CS-B S2
		13-2-2019	*/


#include<stdio.h>
int main()
{
	int num,dig,rev=0;
	printf("Enter an integer number");
	scanf("%d",&num);
	while(num>0)
		{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
		}
	printf("Reverse of the given integer number=%d\n",rev);
}
