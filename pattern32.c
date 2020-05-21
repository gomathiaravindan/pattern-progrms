#include<stdio.h>
int main()
{
	int n,i,j,l;
	scanf("%d",&n);
for(i = n-1;i>=0;i--)
    {
    for(l = n-1 ;l>=i;l--)
   	{
     printf(" ");
	}
	for(j=0;j<=i;j++)
    {
    	printf("%c",65+j);
    }
	printf("\n");	
	     
   }
     
    
}

