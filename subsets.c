#include<stdio.h>
#include<math.h>
int main()
{
	int n,size,k=0,i,j,temp,rt;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	if(n==0)
	{
		printf("Null");		
	}
	size=pow(2,n);
	int a[n];
	
	for(i=1;i<=size;i++)
	{
		temp=i;
		
			while(temp>0)
			{
				a[k]=temp%2;
				temp=temp/2;
				k++;
			}
			while(k<n)
			{
				a[k]=0;
				k++;
			}
				
		k=0;
		for(rt=0;rt<n;rt++)
		{
			if(a[rt]==1)
			{
				printf("%d ",s[rt]);
			}
			
		}
			printf("\n");
		
	}
	printf("null");
	
}
