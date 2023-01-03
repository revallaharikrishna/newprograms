/* Write a C program to print all Prime numbers between 1 to n.  */
#include<stdio.h>
void main()
{
	int num,i,j,count;
	printf("Enter nth number for printing 1 to nth prime numbers: ");
     	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d ",i);
		
	}
	printf("\n");
}	
