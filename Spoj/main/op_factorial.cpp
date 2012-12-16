#include<stdio.h>
void find_five(unsigned long long x)
{
	long long count=0;
	while(x>=5)
	{      
		count+=x/5;
		x=x/5;
	}
	printf("%llu\n",count);
}
int main()
{
	unsigned long long value,num;
	scanf("%llu",&num);
	while(num--)
	{
		scanf("%llu",&value);
		find_five(value);	

	}
	return 0;
}
