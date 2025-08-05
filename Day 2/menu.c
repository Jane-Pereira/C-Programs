//A menu driven program to read two integers & find their sum, difference & product.//
#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("\nEnter your choice: \n1. Sum \n2. Difference\n3. Product \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Sum = %d\n",a+b);
			break;
		case 2: printf("Difference = %d\n",a-b);
			break;
		case 3: printf("Product = %d\n",a*b);
			break;
		default: printf("Invalid Expression\n");
	}
}
		
