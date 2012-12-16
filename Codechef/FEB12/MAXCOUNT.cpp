#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,tem;
		int max=0;
		scanf("%d",&n);
		int a[10001]={0};
		for(int i=1;i<=n;i++){
			scanf("%d",&tem);
			a[tem]++;
			if(a[tem]>max)
				max=a[tem];
		}
		//printf("%d ",max);
		for(int i=1;i<=10001;i++){
			//printf("%d ",a[i]);
			if(a[i]==max){
				printf("%d %d\n",i,max);
				break;
			}

		}
	}
	return 0;
}
