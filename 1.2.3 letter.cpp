// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <stdio.h>


int main(void)
{
	char m;
	printf("Please input a letter:");
	putchar(((m = getchar()) >='A'&&m <= 'Z') ? m +'a'-'A': m);
	return 0;
}