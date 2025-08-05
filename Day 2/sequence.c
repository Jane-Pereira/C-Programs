// Generate a sequence of numbers such that every number in the sequence is the sum of the previous three numbers. The first three numbers are 0,0,1.//
#include<stdio.h>
int main()
{
	int n, a=0, b=0, c=1,d;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\n%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
}
