#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90&&a<=100)
	printf("�ɼ��ȼ�ΪA\n");
	else if(a<90&&a>=80)
	printf("�ɼ��ȼ�ΪB\n");
	else if(a<80&&a>=70)
	printf("�ɼ��ȼ�ΪC\n");
	else if(a<70&&a>=60)
	printf("�ɼ��ȼ�ΪD\n");
	else if(a<60&&a>=0)
	printf("�ɼ��ȼ�ΪE\n");
	else
	printf("error!");
	return 0;
} 
