// 6.Divide an integer without using / operator
// a- dividend & b-divisor
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,sum=0,i=0,mid,low,high,temp,rt,qou;
	scanf("%d %d",&a,&b);
	while(sum<a)
	{
		sum=b*pow(2,i);
		i++;
	}
	i--;
	if(sum==a)
	{
		temp=pow(2,i);
		printf("quotient=%d",temp);
	}
	if(sum>a)
	{
		low=pow(2,i-1);
		qou=low;
		high=pow(2,i);
		while(b*low<a)
		{
			qou++;
			low++;
		}
		printf("quotient=%d",qou-1);
	}
	
	
}
