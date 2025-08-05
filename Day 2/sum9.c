//Write a C program, which will print two digit numbers whose sum of both digit is nine. e.g. 18,27,36......//
#include<stdio.h>
int main()
{
	for(int i=10;i<99;i++)
	{
		int d1=i/10;
		int d2=i%10;
		if(d1+d2==9)
			printf("%d ",i);
	}
}
