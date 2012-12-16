using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n)>0){
		float temp;
		temp = 1+(8.0*n);
		temp=sqrt(temp);
	        temp=(temp-1)*0.5;
		n=ceil(temp);
		printf("%c\n",'A'+n-1);
	}
	return 0;
}
