#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i = n;i > 0;i--)
	{
		for(j = 5;j> 0;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
