#include<stdio.h>
#include<time.h> 
#include<math.h>
int f(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		  return 0;
	}
    return 1;
}
int main()
{
	int i,k=1;
	clock_t t1,t2;
	t1=clock();
	for(i=3;i<=1000000;i+2)
	{
		if(f(i))
		{
			k++;
		}
	}
    t2=clock();
    double t=t2-t1;
    t=t/1000;
    printf("素数有%d\n 用时%f",k,t);
    return 0;
}
