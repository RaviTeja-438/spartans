#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d %d",&n,&i);
	if((1 & n>>i-1)==1)
		printf("ith bit is 1");
	else
		printf("ith bit is 0");
	return 0;
}
