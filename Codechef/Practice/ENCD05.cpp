#include<iostream>
#include<stdio.h>
using namespace std;
void convert(long long n)
{
	int remainder;
	if(n==0)
		return;
	remainder=n%-2;
	n/=-2;
	if(remainder<0){
		n++;
		remainder+=(2);
	}
	printf("%lld  %d\n",n,remainder);
	convert(n);
	//printf("%d",remainder);
}
int main()
{
	long long n;
	while(scanf("%lld",&n)&&n!=0){
		convert(n);
		printf("\n");
	}
	return 0;
}
