#include <stdio.h>
main()
{
	int no, num[20], oddsum,evensum, i;
	
	printf("How many numbers?(below 20) ");
	scanf("%d",&no);
	
	oddsum=evensum=0;
	
	for(i=0;i<no;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&num[i]);
		if (i % 2==0)
			evensum = evensum + num[i];
		else
			oddsum = oddsum + num[i];
	}
	for(i=0;i<no;i++)
		printf("%d\t",num[i]);
	printf("\n\n");
	printf("Sum of all odd subscript numbers: %d",oddsum);
	printf("\n\nSum of all even subscript numbers: %d,",evensum);
	}