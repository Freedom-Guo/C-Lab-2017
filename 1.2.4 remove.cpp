#include<stdio.h>
int main()
{
	unsigned short x, m, n;
	printf("Please input three unsigned numbers x,m,n\n Remember( 0<=m<=15,1<=n<=16-m) \n");
	scanf("%hx", &x);
	scanf("%hx", &m);
	scanf("%hx", &n);
	if (m < 0 || m>15 || n<1 || n>(16 - m))
	{
		printf("error!Remember 0<=m<=15,1<=n<=16-m ");
	}

	else
	{
		x = (x << (16 - m - n)) &(~0<<16-n);
		printf("x=%hx", x);
		scanf("%hx", x);

	}

	return 0;
}

