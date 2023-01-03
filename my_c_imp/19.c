/* Write a C program to print all Perfect numbers between 1 to n. */
#include<stdio.h>
void main()
{
        int num,i,j,sum,temp;
        printf("Enter a number to print Perfect numbers 1 to nth number: ");
        scanf("%d",&num);
	for(j=1;j<=num;j++)
	{
		sum=0;
		temp=j;
        	for(i=1;i<=(j/2);i++)
        	{       
                	if((j%i)==0)
               		{       
                        	sum=sum+i;
                	}	       
        	}       
        	if(temp==sum)
                	printf("%d ",temp);
	}
}       
                    
