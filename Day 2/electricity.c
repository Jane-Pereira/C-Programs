//An Electricity board charges the following rates for use of electricity.//
//For the First 200 units : Rs 5 per unit//
//For the next 100 units : Rs7 per unit//
//Beyond 300 units : Rs 10 Per unit.//

#include<stdio.h>
int main()
{
	int units;
	float bill=0;
	printf("Enter the units consumed: ");
	scanf("%d",&units);
	if(units<=200)
		bill=units*5;
	else if(units<=300)
		bill=200*5+(units-200)*7;
	else
		bill=200*5+100*7+(units-300)*10;
	printf("\nTotal bill = %.2f\n",bill);
}
