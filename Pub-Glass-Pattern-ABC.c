#include<stdio.h>
#include<ctype.h>

void main()
{
	int i,j;
	char n;

	printf("Enter target alphabet of pyramid : ");
	scanf("%c",&n);
	n=toupper(n);
	while(n<'A' || n>'N')
	{
		printf("Enter [V]alid [A]lphabet of pyramid (from a to n) : ");
		fflush(stdin);
		scanf("%c",&n);
		n=toupper(n);
	}
	printf("\n\n");

	for(i=65;i<=n;i++)
	{
		for(j=65;j<=n+(n-65);j++)
		{
			if(j>=i && j<=(2*n)-(i))
				printf("%c",j);
			else
				printf(" ");
		}
		printf("\n");
	}

	for(i=65;i<=n-3;i++)
	{
		for(j=65;j<=n+(n-65);j++)
		{
			if(j>=n-(i-65) && j<=n+(i-65))
				printf("%c",j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
