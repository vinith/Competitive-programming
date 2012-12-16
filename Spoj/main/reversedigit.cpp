#include<stdio.h>
unsigned int reverse_dig(unsigned int n)
{
	unsigned int rev=0;
	while(n>9)
	{          

		rev=(rev+(n%10))*10;
		n=n/10;
	}
	rev+=n;
	return rev;
}
int main()
{
	int t;
	unsigned int num1,num2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%u %u",&num1,&num2);
		printf("%u\n",reverse_dig(reverse_dig(num1)+reverse_dig(num2)));
	}
}
