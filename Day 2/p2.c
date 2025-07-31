//To reverse a number//

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to reverse: \n");
	scanf("%d",&num);
	int reverse=revnum(num);
	printf("The reversed number is: %d\n",reverse);
}
int revnum(int num)
{
	int rev=0;	
	while(num!=0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	return rev;
}
