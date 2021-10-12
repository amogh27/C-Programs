main()
{
	int no, i, flag, count, start, end, total;
	
	printf("Enter the Range: ");
	scanf("%d %d",&start,&end);
	flag=count=total=0;
	for(no=start; no<=end; no++)
	{
		count=0;
		for(i=2;i<=sqrt(no);i++)
		{
			if(no%i==0)
			{
				flag=1;
				break;
			}
			count++;
		}
		if(flag!=1)
		//	printf("\n%d is NOT PRIME NUMBER\n Program executed in %d loops \n", no, count);
		//else
		{	printf("\n%d is PRIME NUMBER \n Program executed in %d loops \n", no, count);
			total++;
		}
		flag=0;
	}
	printf("\n\n Total No. of PRIME NUMEBRS are %d", total);
}
