using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int n,markCount=1,steps=0,addCount=0,vals[1001],ans[1001];
	bool used[1001],marked[1001];
	scanf("%d",&n);
	marked[1]=1;
	for(int i=1;i<=n;i++)
		ans[i]=i;
	while(markCount<n){
		steps++;
		for(int i=2;i<=n;i++){
			if(marked[i]==false&&used[i-1]==false&&marked[i-1]==true){
				ans[i]=ans[i]+ans[i-1];
				addCount++;
				marked[i]=true;
				used[i]==true;
				markCount++;
				continue;
			}
			if(marked[i]==false&&used[i-1]==true&&marked[i-1]==true){
				ans[i]=ans[i]+ans[i-3];
				used[i]=1;
				marked[i]=true;
				addCount++;
				continue;
			}
			if(marked[i]==false&&used[i-1]==false&&marked[i-1]==false){
				ans[i]=ans[i]+ans[i-1];
				used[i]=true;
				addCount++;
				continue;
			}	
		}
		//printf("%d\n",addCount);
		//for(int i=1;i<=n;i++)
			//cout<<i<<" "<<ans[i]<<endl;
	}
	for(int i=1;i<=n;i++)
                        cout<<i<<" "<<ans[i]<<endl;
	cout<<"STEPS: "<<steps<<" ADD: "<<addCount<<endl;
	return 0;
}
