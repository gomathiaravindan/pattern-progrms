#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=(2 * i - 1);k>=1;k--)
		{
			printf("%c",65 + (k - 1));
		}
		printf("\n");
	}
}
