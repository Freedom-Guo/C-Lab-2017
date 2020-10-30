#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _Stu {
	char stuNum[20];
	char name[30];
	float engGrade;
	float mathGrade;
	float phyGrade;
	float CGrade;
	float ave;
	float sum;
	struct _Stu *next;
	struct _Stu *last;
}Stu;
Stu *createDoubleList(int);
void printList(Stu *stu);
int main()
{
	int i, n, nChange;
	scanf("%d", &n);
	getchar();
	Stu *stu = createDoubleList(n);
	Stu *head = stu, *rst;
	char waste[4];

	//input the list
	for (i = 0; i < n; i++)
	{
		scanf("%s%s", stu->stuNum, stu->name);
		scanf("%f", &stu->engGrade);
		scanf("%f", &stu->mathGrade);
		scanf("%f", &stu->phyGrade);
		scanf("%f", &stu->CGrade);
		fgets(waste, 4, stdin);
		stu = stu->next;
	}
	printList(head);
	//change the partiicular contents. Take change the C grade of Harry for example
	stu = head;//initiate the pointer stu
	scanf("%d", &nChange);
	char *lesson[4] = { "English","Math","Physics","C" };
	char changeLesson[15], changeNum[20];
	float changeScore;
	while (nChange-- > 0)
	{
		stu = head;
		scanf("%s %s %f", changeNum, changeLesson, &changeScore);
		while (stu)
		{
			if (strcmp(stu->stuNum, changeNum) == 0)
			{
				if (strcmp(changeLesson, "English") == 0)
					stu->engGrade = changeScore;
				if (strcmp(changeLesson, "Math") == 0)
					stu->mathGrade = changeScore;
				if (strcmp(changeLesson, "Physics") == 0)
					stu->phyGrade = changeScore;
				if (strcmp(changeLesson, "C") == 0)
					stu->CGrade = changeScore;
				break;
			}
			stu = stu->next;
		}
	}
	printf("Alter:\n");
	printList(head);
	//calculate the average scores of each student
	float sum[4] = { 0 };
	for (stu = head; stu != NULL; stu = stu->next)
	{
		stu->sum = stu->engGrade + stu->CGrade + stu->mathGrade + stu->phyGrade;
		stu->ave = stu->sum / 4;
	}

	//print out the sum and average
	printf("SumAndAvg:\n");
	printf("%-15s%-20s%-10s%-10s\n", "ID", "Name", "SUM", "AVG");
	stu = head;
	while (stu)
	{
		printf("%-15s%-20s%-10.2f%-10.2f\n",
			stu->stuNum, stu->name, stu->sum, stu->ave);
		stu = stu->next;
	}
	return 0;
}
//to print out the list
void printList(Stu *stu)
{
	printf("%-15s%-20s%-10s%-10s%-10s%-10s\n", "ID", "Name", "English", "Math", "Physics", "C");
	while (stu)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",
			stu->stuNum, stu->name, stu->engGrade, stu->mathGrade, stu->phyGrade, stu->CGrade);
		stu = stu->next;
	}
	printf("\n");
}
Stu *createDoubleList(int stuNum)
{
	static Stu *head= (Stu*)malloc(sizeof(Stu));
	static int num = stuNum;
	static Stu *tail = head;
	if (num-- < 2)
	{
		tail->next = NULL;
		head->last = NULL;
		return head;
	}
	else
	{
		tail->next = (Stu*)malloc(sizeof(Stu));
		tail->next->last = tail;
		tail = tail->next;
		return createDoubleList(num);
	}
}

