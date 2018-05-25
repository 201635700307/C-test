#include<stdio.h>
#include<math.h>
int main ()
{int math1(int a[10][5]);
int math2(int a[10][5]);
int math3(int a[10][5]);
int math4(int a[10][5]);
int grade[10][5];
int i,j;
for (i=0;i<10;i++)
	for(j=0;j<5;j++)
		{printf("请输入第%d学生的第%d项成绩",i+1,j+1);
scanf("%d",&grade[i][j]);}
math1(grade);
math2(grade);
return 0;
}

int math1(int a[10][5])
{int avg_grade,m,n;
int s=0;
for (m=0;m<10;m++)
	{for(n=0;n<5;n++)
	{s=s+a[m][n];}
avg_grade=s/5;
printf("第%d个学生的平均分是%d\n",m+1,avg_grade);}
return 0;
}

int math2(int a[10][5])
{int avg_grade,m,n;
int s=0;
for (m=0;m<5;m++)
	{for(n=0;n<10;n++)
	{s=s+a[n][m];}
avg_grade=s/10;
printf("第%d项课程的平均分是%d\n",m+1,avg_grade);}
return 0;
}

int math3(int a[10][5])
{int m,n,t;
t=a[0][0];
	for(m=0;m<10;m++)
	for(n=0;n<5;n++)
	if(a[m][n]>t)
	{t=a[m][n];}
printf("最高分数对应于%d号学生%d门课程",m+1,n+1);
return 0;
}

