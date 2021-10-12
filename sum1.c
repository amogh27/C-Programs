#include <stdio.h>
main()
{
	int no, num, sum, i;
	
	printf("How many numbers? ");
	scanf("%d",&no);
	
	sum=0;
	
	for(i=1;i<=no;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&num);
		sum = sum + num;
	}
	
	printf("Sum of  all numbers: %d",sum);
	}