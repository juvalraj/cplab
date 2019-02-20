/*Juval CS-B
  20-2-19 */
#include<stdio.h>
int main()
{
	int length,breadth,area,perimeter;
	printf("Enter Length and Breadth");
	scanf("%d %d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	printf("Area = %d \n",area);
	printf("Perimeter = %d \n",perimeter);
	if(area>perimeter)
		printf("Area of the rectangle with length %d and breadth %d is greater than its perimeter",length,breadth);
	else
		printf("Area of the rectangle with length %d and breadth %d is less than its perimeter");
}
