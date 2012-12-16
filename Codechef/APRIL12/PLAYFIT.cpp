using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int t,n,max=0,temp,bigger;
	scanf("%d",&t);
	while(t--){
		max=0;
		int g[100000];
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d",&g[i]);
		for(int i=0;i<n;i++){
			bigger=i;
			for(int k=i+1;k<n;k++){
				if(g[k]>bigger){
					temp=g[k]-g[i];
					if(temp>max){
						max=temp;
						bigger=g[k];
					}
				}
			}
		}
		if(max<=0)
			printf("UNFIT\n");
		else
			printf("%d\n",max);
	}
	return 0;
}
