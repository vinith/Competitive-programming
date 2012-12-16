#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,a1,a2,a3;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&a1,&a2,&a3);
		if(a2-a1==a3-a2)
			printf("%d\n",a3+(a3-a2));
		else
		printf("%d\n",a3*(a3/a2));		
	}
	return 0;
}
