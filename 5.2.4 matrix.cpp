#include<stdio.h>
int main()
{
	int a[3][4];
	int i, j;
	//����ԭ����
	for (i = 0; i < 3; i++) /*i��ʾ����*/ 
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);

	//���ԭ����
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}

	//���к����ת�þ���
	printf("\n");
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 3; i++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}

