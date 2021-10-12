#include <stdio.h>
main()
{
	int no, num[20], sum, i;
	
	printf("How many numbers?(below 20) ");
	scanf("%d",&no);
	
	sum=0;
	
	for(i=0;i<no;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&num[i]);
		sum = sum + num[i];
	}
	for(i=0;i<no;i++)
		printf("%d\t",num[i]);
	printf("\n\n");
	printf("Sum of all above numbers: %d",sum);
	}