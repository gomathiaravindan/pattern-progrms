#include<stdio.h>
int main()
{
	int n,i,j,l;
	scanf("%d",&n);
for(i = 0;i<n;i++)
    {
	for(j=n-1;j>i;j--)
    {
    	printf(" ");
    }
    
    for(l = 0;l<=i;l++)
   	{
     printf("%c",65+i);
	}
	printf("\n");	
	     
   }
     
    
}

