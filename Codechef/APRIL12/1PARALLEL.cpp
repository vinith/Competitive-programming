using namespace std;
#include<iostream>
#include<cstdio>
#include<string.h>
int main()
{
	int marked[1001],used[1001],ans[10001];
	int n,addCount=0,markCount=1,steps=0;
	int temp,k;
	int final[10001][2];
	memset(marked,-1,sizeof(marked));
	marked[1]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		ans[i]=i;
	while(markCount<n){
//flag:
		steps++;
		//cout<<steps<<endl;
		for(int i=2;i<=n;i++){
			if(marked[i]==-1){
				if(used[i]==0){//current unused
					if(marked[i-1]!=-1&&marked[i-1]<steps){ // previous marked
						ans[i]=ans[i]+ans[i-1];
						++addCount;
						marked[i]=used[i]=steps;
						++markCount;
						printf("step%d %d+%d=%d\n",steps,i-1,i,i);
					}
					else if(used[i-1]<steps){ // previous unused or used in older step
						ans[i]=ans[i]+ans[i-1];
						++addCount;
						used[i]=steps;
						printf("step%d %d+%d=%d\n",steps,i-1,i,i);
					}
				}
				else if(used[i]!=0){ // current used
					if(marked[i-1]>0){ // previous marked in current step or older step
						for(k=0;k<i;k++){
							if(marked[k]<steps && ans[i]+ans[k]==(i*(i+1))/2){
								ans[i]=ans[i]+ans[k];
								++addCount;
								++markCount;
								marked[i]=used[i]=steps;
								printf("step%d %d+%d=%d\n",steps,k,i,i);
								break;
							}
						}	
					}
					
				}
			}


		}
	}
	for(int i=1;i<=n;i++)
		cout<<i<<" "<<ans[i]<<endl;
	cout<<"STEPS: "<<steps<<" ADD: "<<addCount<<endl;
	//printf("%d\n",steps);
	//for()
	return 0;
}
