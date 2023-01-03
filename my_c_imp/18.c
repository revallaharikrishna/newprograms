/* Write a C program to check whether a number is Perfect number or not. */
#include<stdio.h>
void main()
{
	int num,temp,sum=0,i;
	printf("Enter a number for checking Perfect number or not: ");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=(num/2);i++)
	{
		if((num%i)==0)
		{
			sum=sum+i;
		}
	}
	if(temp==sum)
		printf("%d is a Perfect number.\n",temp);
	else
		printf("%d is not a Perfect number.\n",temp);
}
