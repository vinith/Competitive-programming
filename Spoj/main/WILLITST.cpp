#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	unsigned long long n;
	scanf("%llu",&n);
	if(n%3==0)
		printf("NIE\n");
	else{
		while(n%2==0)
		{
			n/=2;

		}
		if(n==1)
			printf("TAK\n");
		else
			printf("NIE\n");
	}
	return 0;
}
