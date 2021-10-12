#include<stdio.h>
main()
{
	int i, j, row, no;
	
	printf("How many no. of lines required:");
	scanf("%d",&row);
	
	no = 1;
	
	for(j=1;j<=row;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d\t",no);
			no++;
		}
		printf("\n");
	}
}