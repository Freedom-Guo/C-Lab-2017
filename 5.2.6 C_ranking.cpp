#include<stdio.h>
typedef struct Stu {
	char name[20];
	float score;
}Stu;
Stu scan(Stu stu[], int begin, int end, float score);
const Stu null = { "Null",-1 };
int main()
{
	int i, j, n;
	Stu stu[50];
	printf("How many students in class?\n");
	scanf("%d", &n);
	printf("Input all your students'name and score:\n");
	for (i = 0; i < n; i++)
		scanf("%s %f", stu[i].name, &stu[i].score);

	//对输入的信息按照分数由高到低进行排序
	for (i = n; i > 0; i--)
		for (j = 1; j < i; j++)
			if (stu[j - 1].score < stu[j].score)
			{
				Stu tmp = stu[j - 1];
				stu[j - 1] = stu[j];
				stu[j] = tmp;
			}

	//调用二分查找函数进行查找
	float _score;
	printf("Now, you can input a student's score:\n");
	while (scanf("%f", &_score) != EOF)
	{
		Stu one = scan(stu, 0, n - 1, _score);
		if (one.score == -1)
			printf("Not Found!\n");
		else printf("Found : %s %.2f\n", one.name, one.score);
	}
	return 0;
}
/***********************************************************
函数功能：二分查找
函数参数：学生组，开始查找位置，结束查找位置，查找的分数
函数返回：找到的学生（Stu类型）
*************************************************************/
Stu scan(Stu stu[], int begin, int end, float score)
{
	//当begin和end足够接近时，验证begin，end
	if (begin >= end - 1)
	{
		if (stu[end].score == score)
			return stu[end];
		else if (stu[begin].score == score)
			return stu[begin];
		else return null;
	}

	//递归调用函数二分查找
	int i = (begin + end) / 2;
	if (stu[i].score == score)
		return stu[i];
	else if (stu[i].score < score)
		return scan(stu, begin, i, score);
	else if (stu[i].score > score)
		return scan(stu, i, end, score);
}

