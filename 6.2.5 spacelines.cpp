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
    getchar();//���ջ��з�
    for(i=0;i<n;i++){
        p[i]=a[i];//����ά����ĸ���һ��������׵�ַ����ָ��������
        gets(p[i]);
    }
    printf("print:\n");
    while(j<n)
    {
        x=check(p[j]);//������鲢���䰴Ҫ�󽫶���ո�ϲ���
        if(x){
            printf("%s\n",p[j]);
            j++;
        }
        else j++;//������Ϊ���У���������
    }
    printf("\nPress any key to quit...");
    getchar();
    return 0;
}

int check(char *s)
{
    int i=0,k=0,y=0,flag=0;
    if(*s!='\0')//�Ƿ��������ַ���
    {
        y=1;
        while(*s!='\0')
        {
            if(*s==' ')
            {
                if(flag!=1)//��Ϊ��һ���ո�������ѹ������
                    flag=1;
                else while(*(s+i-1)!='\0')//ѹ���ַ����顣ʹ�ո��Ϊһ��
                        {
                            *(s+i-1)=*(s+i);
                            i++,k=1;
                        }
                 if(!k) s++;//����ո�ѹ����Ͼ������¸��ַ���
                 i=0,k=0;
            }
            else//���ǿո񡣼��ͨ��ֱ���¸��ַ���
            {
                s++;
                flag=0;
            }
        }
    }
    return y;
}

