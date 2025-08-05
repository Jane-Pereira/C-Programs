//To find Amicable numbers//
#include<stdio.h>
int aminum(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	return sum;
}
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	if(aminum(a)==b && aminum(b)==a)
		printf("\nThe numbers are Amicable numbers.\n");
	else
		printf("\nThe numbers are not Amicable numbers.\n");
}
