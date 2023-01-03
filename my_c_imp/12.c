/* Write a C program to print n Prime numbers between . */
#include<stdio.h>
void main()
{
	int num,count=1,count1,i,j;
	printf("Enter number for n prime numbers: ");
	scanf("%d",&num);
	while(count<=num)
	{
		static int i=2;
		count1=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count1++;	
		}
		if(count1==2)
		{
			printf("%d ",i);
			count++;
		}
		i++;
	}
}
