#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	
	double x,n;
	unsigned long long y;
	scanf("%lf",&n);
	x=log(n)/log(2);
	y=x;
	//printf("%f",x);
		if(y==x)
			printf("TAK\n");
		else
			printf("NIE\n");
	return 0;
}
