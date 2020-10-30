#include<stdio.h>
int main()
{
	int a[3][4];
	int i, j;
	//输入原矩阵
	for (i = 0; i < 3; i++) /*i表示行数*/ 
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);

	//输出原矩阵
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}

	//换行后输出转置矩阵
	printf("\n");
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 3; i++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}

