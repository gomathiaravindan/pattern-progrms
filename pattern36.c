#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<(2*i - 1);k++)
		{
			printf("%c",65 + (i-1));
		}
		printf("\n");
	}
}
