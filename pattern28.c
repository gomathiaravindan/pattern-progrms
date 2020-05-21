#include<stdio.h>
int main()
{
	int n,i,j,l;
	scanf("%d",&n);
for(i = n;i>=1;i--)
    {
    for(l = n-1 ;l>=i;l--)
   	{
     printf(" ");
	}
	for(j=1;j<=i;j++)
    {
    	printf("*");
    }
	printf("\n");	
	     
   }
     
    
}

