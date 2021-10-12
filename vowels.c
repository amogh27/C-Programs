#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i, count=0;
	
	printf("Enter the String: ");
	//scanf("%s",str);
	gets(str);
	
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
			count++;
		i++;
	}
	printf("Total Number of Vowels: %d", count);
}