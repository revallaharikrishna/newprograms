/* Write a C program to check whether a number is Prime number or not. */
#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("Enter number for checking is it prime or not: ");
	scanf("%d",&num);
	for(i=2;i<=(num/2);i++)
	{
		if((num%i)==0)
		count++;
	}
	if(count>0)
		printf("Entered number is not prime number\n");
	else
		printf("Entered number is prime number\n");
}
