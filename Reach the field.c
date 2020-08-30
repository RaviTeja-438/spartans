#include<stdio.h>
int main()
{
	int n,bag_size,sum=0,c=0,i;
	printf("enter no of elements and bag size");
	scanf("%d %d",&n,&bag_size);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==bag_size)
		{
			c++;
			if(i==n-1)
			{
				c--;
			}
			
			sum=0;
		}
		else if(sum>bag_size)
		{
			c++;
			i--;
			
			sum=0;
		}
		
	}
	printf("no of rounds-%d",++c);
}
