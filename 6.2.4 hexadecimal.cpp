#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long mask = 0xflu << (8 * sizeof(long) - 4);
	char *rst = (char*)malloc(sizeof(char) * 100);
	long *orinum = (long*)malloc(sizeof(long) * 100);
	int n, i = 0, j, k;
	printf("How many numbers are to be input:\n");
	scanf("%d", &n);
	printf("Please input the numbers:\n");
	for (i = 0; i < n; i++)
		scanf("%ld", orinum + i);
	for (k = 0; k < n; k++)
	{
		mask = 0xflu << (8 * sizeof(long) - 4);
		for (i = 0, j = 0; mask > 0; mask >>= 4, j++, i++)
		{ 
			//依次取出每一位
			*(rst + i) = (char)((mask&(*(orinum+k))) >> (sizeof(long) * 8 - 4 - 4 * j));
			if (*(rst + i) <= 9)
				*(rst + i) += '0';
			else if (rst[i] > 9)
				*(rst + i) = *(rst + i) - 10 + 'A';
		}
		*(rst + i) = '\0';//最后赋值结束符\0
		for (i = 0; *(rst + i + 1) != '\0'; i++)
			printf("%c ", *(rst + i));
		printf("%c\n", *(rst + i));
	}
	return 0;
}

