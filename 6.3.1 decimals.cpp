#include<stdio.h>
#include<string.h>
#define M 20
#define N 10
#define A (M+N)
int main()
{
	char _num1[A + 2], _num2[A + 2];
	printf("Please input two numbers with (20nums).(10nums):\n");
	scanf("%s", _num1);
	scanf("%s", _num2);
	int num1[A + 1] = { 0 }, num2[A + 1] = { 0 };
	int i, j, flag = 0;
	for (i = 1, j = 0; i < A + 1; i++, j++)
	{
		if (_num1[j] == '.') j++;
		num1[i] = _num1[j] - '0';
		num2[i] = _num2[j] - '0';
	}
	for (i = A; i > 0; i--)
	{
		num1[i] += num2[i];
		if (num1[i] >= 10)
		{
			num1[i] -= 10;
			num1[i - 1]++;
		}
	}
	if (num1[0] != 0)
		printf("%d", num1[0]);
	for (i = 1; i <= A; i++)
	{
		if (i == M + 1)
			printf(".");
		printf("%d", num1[i]);
	}
	printf("\n");
	return 0;
}

