/* Write a C program to print alternative Prime numbers between 1 to n. */
#include<stdio.h>
void main()
{
        int num,i,j,count,count1=1;
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
		       ++count1;
			if((count1%2)==0)
			{
                        	printf("%d ",i);
			}
		}

        }
        printf("\n");
}

