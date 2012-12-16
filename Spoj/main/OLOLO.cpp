#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,number,answer;
	scanf("%d",&n);
	scanf("%d",&answer);
	n--;
	while(n--)
	{
	scanf("%d",&number);
	answer^=number;
	}
	printf("%d",answer);
	return 0;
}
