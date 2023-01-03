#include<stdio.h>
#include<math.h>
void main()
{
	int num,temp,flag,digit=0,rem,value,sum=0;
	printf("Enter a number to it is Armstong or not: ");
	scanf("%d",&num);
	temp=num;
	flag=num;
	while(num>0)
	{
		num=num/10;
		digit++;
	}
	while(temp>0)
	{
		rem=temp%10;
		value=pow(rem,digit);
		sum=sum+value;
		temp=temp/10;
	}
	if(flag==sum)
		printf("%d is Armstrong number.\n",flag);
	else
		printf("%d is not a Armstrong number.\n",flag);
}

