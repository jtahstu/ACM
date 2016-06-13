// 客观题评分

// Description

// 已知安徽科技大学某一门课程的期末考试试卷格式如下10个判断，20个单选，10个多选，其中判断题每题1分，单选题每题2分，多选题每题5分
// 你的任务就是给定一份标准答案的条件下，给出每一份解答对应的成绩。

// Input

// 一共有M+2行，
// 第1行是标准答案
// 第2行一个整数M代表待批阅的M份试卷
// 后面跟了M个解答

// Output

// 每一组输出一个成绩

// Sample Input

// T T T T T F F F F F A B C D A B A C A D A A B B C C D D A B ABC ABC BCD CD AC BC AD BC AC ABCD
// 3
// T T T T T F F F F F A B C D A B A C A D A A B B C C D D A B ABC ABC BCD CD AC BC AD BC AC ABCD
// F T T T T F F F F F A B C D A B A C A D A A B B C C D D A B ABC ABC BCD CD AC BC AD BC AC ABCD
// T T T T T F F F F F A B C D A B A C A D A A B B C C D D A B ABC ABC BCD CD AC BC AD BC AC ABC
// T T T T T F F F F F A B C D A B A C A D A A B B C C D D A A ABC ABC BCD CD AC BC AD BC AC ABCD

// Sample Output

// 100
// 99
// 95
// 98

#include "stdio.h"
int main()
{
	int i,N,grade1=0,grade2=0,grade3=0;
	char a[100],b[100];
	scanf("%s",a);
	scanf("%d",&N);
	while(N--)
	{
		scanf("%s",b);
		for (i = 0; i < 10; ++i)
		{
			if (b[i]==a[i])
			grade1++;
		}
		for (i = 10; i < 30; ++i)
		{
			if (b[i]==a[i])
			{
				grade2+=2;
			}
		}
		for(i=30;i<40;i++)
		{
			if (b[i]==a[i])
			{
				grade3+=5;
			}
		}
		printf("%d\n", grade1+grade2+grade3);

	}
	return 0;
}
