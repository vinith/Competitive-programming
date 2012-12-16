using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int t,n,minEle,max,temp;
	scanf("%d",&t);
	while(t--){
		int g[100000];
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d",&g[i]);
		minEle=g[0];
		max=0;
		for(int i=1;i<n;i++){
			temp=g[i];
			if(temp-minEle>max)
				max=temp-minEle;

			if(temp<minEle)
				minEle=temp;
		}
		if(max<1)
			printf("UNFIT\n");
		else
			printf("%d\n",max);
	}
	return 0;
}
