//To check if the given number is a palindrome//

#include<stdio.h>
int n,og;
int main()
{
	printf("Enter a number: \n");
	scanf("%d",&n);
	og=n;
	palindrome(n);
}
int palindrome(int n)
{
	int rev=0;
	while(n!=0)		//To reverse the number//
	{
		rev=rev*10+n%10;
		n/=10;
	}
	if(og==rev)		//To  check if the reversed number is equal to the priginal//
		printf("The given number is a palindrome\n",og);
	else
		printf("The given number is not a palindrome\n",og);
}
