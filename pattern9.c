#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i = n-1;i >= 0;i--)
	{
		for(j = n-1;j >=0 ;j--)
		{
			printf("%c ",65+j);
		}
		printf("\n");
	}
}
