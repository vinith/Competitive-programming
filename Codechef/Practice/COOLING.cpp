using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
int main()
{
	int t,n;
	int p1,p2,count;
	for(scanf("%d",&t);t--;){
		count=0;
		scanf("%d",&n);
		p1=p2=n-1;
		int pie[n],cool[n];
		for(int i=0;i<n;i++)scanf("%d",&pie[i]);
		for(int i=0;i<n;i++)scanf("%d",&cool[i]);
		sort(pie,pie+n);
		sort(cool,cool+n);
		while(p1>-1&&p2>-1){
			if(pie[p1]<=cool[p2]){
				count++;
				p1--;p2--;
			}
			else
				p1--;
		}
		printf("%d\n",count);
	}

	return 0;
}
