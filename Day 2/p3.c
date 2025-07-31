//To count the occurence of a digit//

#include<stdio.h>
int main()
{
	int n,dig,count;
	printf("Enter a number: \n");
	scanf("%d",&n);
	printf("Enter the digit you want to count: \n");
	scanf("%d",&dig);
	int c=ood(n,dig);
	printf("The digit %d occurs %d times\n",dig,c);
}
int ood(int n,int dig)
{
	int count=0;
	while(n!=0)
	{
		if(n%10==dig)
		{
			count++;
		}
		n=n/10;
	}
	return count;
}
