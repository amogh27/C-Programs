#include<stdio.h>
main()
{
	int a[10], i, large1,large2;
	
	printf("Enter the Number: ");
	scanf("%d",&a[0]);
	
	large1 = large2 = a[0];
	
	for(i=1;i<10;i++)
	{
		printf("Enter the Number: ");
		scanf("%d",&a[i]);
		if(a[i]>large1)
		{
			large2 = large1;
			large1 = a[i];
		}
	}
	
	printf("Sum of two largest numbers is %d",large1+large2);
}