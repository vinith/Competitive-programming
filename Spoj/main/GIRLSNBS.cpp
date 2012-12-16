#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int b,g,temp;
	while(scanf("%d %d",&b,&g)&&b!=-1){
		if(g>b){
			temp=b;
			b=g;
			g=temp;
		}
		printf("%d\n",(b+g)/(g+1));
	}
	return 0;
}

