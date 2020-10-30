#include<stdio.h>
#include<string.h>
#define max 81
int check(char *s);
int main()
{
    int n,x,i,j=0;
    printf("Please enter the n of your lines:");
    scanf("%d",&n);
    char a[n][max],*p[n];
    getchar();//吸收换行符
    for(i=0;i<n;i++){
        p[i]=a[i];//将二维数组的各个一级数组的首地址存入指针数组中
        gets(p[i]);
    }
    printf("print:\n");
    while(j<n)
    {
        x=check(p[j]);//检查数组并将其按要求将多余空格合并。
        if(x){
            printf("%s\n",p[j]);
            j++;
        }
        else j++;//若此行为换行，则跳过。
    }
    printf("\nPress any key to quit...");
    getchar();
    return 0;
}

int check(char *s)
{
    int i=0,k=0,y=0,flag=0;
    if(*s!='\0')//是否有输入字符。
    {
        y=1;
        while(*s!='\0')
        {
            if(*s==' ')
            {
                if(flag!=1)//若为第一个空格则跳过压缩数组
                    flag=1;
                else while(*(s+i-1)!='\0')//压缩字符数组。使空格变为一个
                        {
                            *(s+i-1)=*(s+i);
                            i++,k=1;
                        }
                 if(!k) s++;//多余空格压缩完毕就跳到下个字符。
                 i=0,k=0;
            }
            else//不是空格。检查通过直接下个字符。
            {
                s++;
                flag=0;
            }
        }
    }
    return y;
}

