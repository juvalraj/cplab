/*Juval CS-B
  20-2-19 */
#include<stdio.h>
int main()
{
	int ramage,shyamage,ajayage;
	
	printf("Enter Age of Ram ");
	scanf("%d",&ramage);
	printf("Enter Age of Shyam");
	scanf("%d",&shyamage);
	printf("Enter Age of Ajay");
	scanf("%d",&ajayage);
	if(ramage<shyamage && ramage<ajayage)
		printf("Ram is younger");
	else if(shyamage<ramage && shyamage<ajayage)
		printf("Shyam is younger");
	else if(ajayage<ramage && ajayage<shyamage)
		printf("Ajay is younger");
}
