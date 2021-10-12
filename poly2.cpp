#include<stdio.h>

main()
{
	int first[20], second[20], result[20], firstorder, secondorder, resultorder, index;
	
	printf("Enter Order of the First Polynomial Expression (Less than 19):");
	scanf("%d",&firstorder);
	
	for(index=firstorder;index>=0;index--)
	{
		printf("Enter the co-efficient for x^%d:",index);
		scanf("%d",&first[index]);	
	}	
	
	printf("Enter Order of the Second Polynomial Expression (Less than 19):");
	scanf("%d",&secondorder);
	
	for(index=secondorder;index>=0;index--)
	{
		printf("Enter the co-efficient for x^%d:",index);
		scanf("%d",&second[index]);	
	}	
	
	
	printf("\n\n First Polynomial is \n\n ");
	for(index=firstorder;index>0;index--)
	{
		if(first[index]!=0)
		printf("%dx^%d + ",first[index],index);
	}
	printf("%d",first[0]);
	
	printf("\n\n Second Polynomial is \n\n ");
	for(index=secondorder;index>0;index--)
	{
		if(second[index]!=0)
		printf("%dx^%d + ",second[index],index);
	}
	printf("%d",second[0]);
}