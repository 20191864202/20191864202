#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90&&a<=100)
	printf("成绩等级为A\n");
	else if(a<90&&a>=80)
	printf("成绩等级为B\n");
	else if(a<80&&a>=70)
	printf("成绩等级为C\n");
	else if(a<70&&a>=60)
	printf("成绩等级为D\n");
	else if(a<60&&a>=0)
	printf("成绩等级为E\n");
	else
	printf("error!");
	return 0;
} 
