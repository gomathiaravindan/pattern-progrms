#include<stdio.h>
int main()
{
	int n,i,j,l;
	scanf("%d",&n);
for(i = 1;i<=n;i++)
    {
	for(j=n-i;j>0;j--)
    {
    	printf(" ");
    }
    
   for(l = 1;l<=i;l++)
   	{
     printf("%d",i);
	}
	printf("\n");	
	     
   }
     
    
}


