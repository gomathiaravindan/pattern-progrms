#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i = n-1;i>=0;i--)
	{
		for(j = 0;j<=i;j++)
		{
			printf("%c ",65+i);
		}
		printf("\n");
	}
}
