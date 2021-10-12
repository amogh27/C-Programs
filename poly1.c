#include<stdio.h>

main()
{
	int poly[20], order, index;
	
	printf("Enter Order of the Polynomial Expression (Less than 19):");
	scanf("%d",&order);
	
	for(index=order;index>=0;index--)
	{
		printf("Enter the co-efficient for x^%d:",index);
		scanf("%d",&poly[index]);	
	}	
	printf("\n\n\n\n");
	for(index=order;index>0;index--)
	{
		if(poly[index]!=0)
		printf("%dx^%d + ",poly[index],index);
	}
	printf("%d",poly[0]);
}