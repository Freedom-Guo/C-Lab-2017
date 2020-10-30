#include<stdio.h>
int main()
{
	int x,m;
	printf("Please enter a positive integer x:");
	scanf("%d",&x);
	while(x>0) 
	{
		m=x%10;
		x=x/10;
		printf("%d",m);
	}
	return 0;
}
