/* Write a C program to find sum of all prime numbers between 1 to n. */
#include<stdio.h>
void main()
{
        int num,i,j,count,sum=0;
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
		{
			sum=sum+i;
		}
	}
	printf("all prime numbers between 1 to %d is %d ",num,sum);

        
        printf("\n");
}

