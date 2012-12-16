#include<iostream>
#include<stdio.h>
using namespace std;
void convert(int n)
{
	int remainder;
	if(n==0)
		return;
	remainder=n%2;
	n/=-2;
	if(remainder<0){
		n++;
		remainder+=(2);
	}
	convert(n);
	printf("%d",remainder);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
		printf("0");
	else 
		convert(n);
	printf("\n");

	return 0;
}
