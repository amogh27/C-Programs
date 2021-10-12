main()
{
	int no, i, flag, count;
	
	printf("Enter the Number: ");
	scanf("%d",&no);
	flag=count=0;
	for(i=2;i<=sqrt(no);i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		count++;
	}
	if(flag==1)
		printf("\n%d is NOT PRIME NUMBER\n Program executed in %d loops \n", no, count);
	else
		printf("\n%d is PRIME NUMBER \n Program executed in %d loops \n", no, count);
}
