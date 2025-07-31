#include <stdio.h>

//To find the sum of a five digit number//

int main()
{
	int num,a[4];
	printf("Enter a five digit number: \n");
	scanf("%d",&num);	
	arr(num,a);
	int total=sum(a);
	printf("The sum is: %d\n",total);
	return 0;
}
void arr(int num, int a[])
{
	for(int i=4;i>=0;i--)
	{
		a[i]=num%10;
		num=num/10;
	}
}
int sum(int a[])
{
	int s=0;
	for(int i=0;i<5;i++)
		s=s+a[i];
	return s;
}

