// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include <stdio.h>


int main(void)
{
	char m;
	printf("Please input a letter:");
	putchar(((m = getchar()) >='A'&&m <= 'Z') ? m +'a'-'A': m);
	return 0;
}