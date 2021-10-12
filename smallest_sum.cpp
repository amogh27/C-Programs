#include<stdio.h>
main()
{
	int a[10], i, small1,small2;
	
//	printf("Enter the Number: ");
//	scanf("%d",&a[0]);
	
	small1 = small2 = 9999;
	
	for(i=0;i<10;i++)
	{
		printf("Enter the Number: ");
		scanf("%d",&a[i]);
		if(a[i]<small1)
		{
			small2 = small1;
			small1 = a[i];
		}
		else
			if(a[i]<small2)
				small2=a[i];
	}
	
	printf("Sum of two smallest numbers is %d",small1+small2);
}