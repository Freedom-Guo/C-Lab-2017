#include<stdio.h>
#include<string.h>
char *_strcat(const char *, const char *);
char *_strcpy(const char *, const char *);
char rst[100];
int main()
{
    int x=1;
    char s[162],a[81],*q=s;
    char *(*p[2])(const char*,const char *);
    p[0] = _strcat;
    p[1] = _strcpy;
    printf("Please inputs two chars:\n");
    gets(s);
    gets(a);
    printf("Please input your order :\n");
    printf("1-将两个字符串连接并输出\n");
    printf("2-用第二行字符串覆盖第一行字符串并输出\n0-退出\n");
    while(x!=0)
    {
        scanf("%d",&x);
        if(x==1){
            q=p[0](s,a);
            printf("%s\n",q);
        }
        else if(x==2){
                q=p[1](s,a);
                printf("%s\n",q);
        }
    }
    printf("\nPress any key to quit...");
    getchar();
    return 0;
}
char *_strcat(const char *a, const char *b)
{
	strcpy(rst, a);
	strcat(rst, b);
	return rst;
}
char *_strcpy(const char *a, const char *b)
{
	strcpy(rst, a);
	return strcpy(rst, b);
}

