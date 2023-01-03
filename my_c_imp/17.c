/*Write a C program to print all Armstrong numbers between 1 to n*/
#include<stdio.h>
#include<math.h>
void main()
{
        int num,temp,i,flag,temp1,digit=0,rem,value,sum;
        printf("Enter a number to print all Armstrong between 1 to nth numbre: ");
        scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	    	temp=i;
        	flag=i;
		temp1=i;
		digit=0;
        	while(temp1>0)
        	{
                	temp1=temp1/10;
                	digit++;
        	}
		value=0;
		sum=0;
        	while(temp>0)
        	{
                	rem=temp%10;
               		value=pow(rem,digit);
                	sum=sum+value;
	             	temp=temp/10;
        	}
        	if(flag==sum)
		{
                	printf("%d ",flag);
		}
  	}
}

                
