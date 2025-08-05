//Program to convert a binary number to decimal and vice versa//
#include<stdio.h>
#include<math.h>
int binary_to_decimal(int binary)
{
	int decimal=0,i=0;
	while(binary!=0)
	{
		int digit=binary%10;
		decimal+=digit*pow(2,i++);
		binary/=10;
	}
	return decimal;
}
int decimal_to_binary(int decimal)
{
	int binary=0,place=1;
	while(decimal!=0)
	{
		binary=binary+(decimal%2)*place;
		decimal/=2;
		place*=10;
	}
	return binary;
}

int main()
{
	int choice,num;
	printf("1. Binary to Decimal\n2. Decimal to Binary\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter Binary number: ");
		scanf("%d",&num);
		printf("\nDecimal = %d\n",binary_to_decimal(num));
	}
	else
	{
		printf("Enter Decimal number: ");
		scanf("%d",&num);
		printf("\nBinary = %d\n",decimal_to_binary(num));
	}
}
