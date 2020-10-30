#include<stdio.h>
int main(int argc, int argv[])
{
	int i, j, n;
	int num[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	
	for (j = n - 1; j > 1; j--)
		for (i = 1; i <= j; i++)
		{
			//ÉýÐò
			if (num[i - 1] > num[i])
			{
				int tmp = num[i - 1];
				num[i - 1] = num[i];
				num[i] = tmp;
			}

			//½µÐò
			if (num[i - 1] < num[i] && argc == 2)
			{
				int tmp = num[i - 1];
				num[i - 1] = num[i];
				num[i] = tmp;
			}
		}

	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
	printf("\n");
}

