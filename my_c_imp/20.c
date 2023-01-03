/* 20 Write a C program to check whether a number is Strong number or not. */
#include<stdio.h>
void main()
{
	int num,temp,rem,i,mul=1,sum=0;
	printf("Enter any number to check it is a Strong number or not: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		mul=1;
		rem=num%10;
		for(i=rem;i>1;i--)
		{
			mul=mul*i;
		}
		sum=sum+mul;
		num=num/10;
	}
	if(temp==sum)
		printf("%d is a Strong number.\n",temp);
	else
		printf("%d is not a strong number.\n",temp);
}


