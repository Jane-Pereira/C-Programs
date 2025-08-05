//To check if the given number is an amstrong number//
#include <stdio.h>
int main()
{
	int num,temp,digit;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		temp/=10;
		sum=sum+digit*digit*digit;
	}
	if(sum==num)
		printf("The given number %d is an armstrong number\n",num);
	else
		printf("The given number %d is not an armstrong number\n",num);
	return 0;
}



