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
	int cstep[1001];
	memset(marked,-1,sizeof(marked));
	marked[1]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		ans[i]=i;
	while(markCount<n){
flag:
		steps++;
		//cout<<steps<<endl;
		for(int i=2;i<=n;i++){
			if(marked[i]==-1){
				if(used[i]==0){//current unused
					if(marked[i-1]!=-1&&marked[i-1]<steps){ // previous marked
						ans[i]=ans[i]+ans[i-1];
						++addCount;
						cstep[steps]++;
						marked[i]=used[i]=steps;
						++markCount;
						printf("1 step%d %d+%d=%d\n",steps,i-1,i,i);
						//if(cstep[steps]>30)
						//goto flag;
					}
					else if(used[i-1]<steps){ // previous unused or used in older step
						ans[i]=ans[i]+ans[i-1];
						++addCount;
						used[i]=steps;
						printf("2 step%d %d+%d=%d\n",steps,i-1,i,i);
						cstep[steps]++;
						//if(cstep[steps]>n/20)
						//goto flag;
					}
				}
				else if(used[i]!=0){ // current used
					if(marked[i-1]==steps){ // previous marked in current step or older step
						for(k=1;k<i;k++){
							if(marked[k]<steps && ans[i]+ans[k]==(i*(i+1))/2){
								ans[i]=ans[i]+ans[k];
								++addCount;
								++markCount;
								marked[i]=used[i]=steps;
								printf("3 step%d %d+%d=%d\n",steps,k,i,i);
								cstep[steps]++;
								break;
							}
						}	
					}
					else if(used[i-1]==steps){ //previous was used again in current step
						for(k=1;k<i-1;k++){ // find what was added to previous and add it current
							if(ans[i]+ans[k]-i==ans[i-1]){
								ans[i]=ans[i]+ans[k];
								++addCount;
								used[i]=steps;
								printf("4 step%d %d+%d=%d\n",steps,k,i,i);
								cstep[steps]++;
								break;
								//if(cstep[steps]>1)
									//goto flag;
							}
						}
					}
				}


			}
		}
	}
	//for(int i=1;i<=n;i++)
	cout<<n<<" "<<ans[n]<<endl;
	cout<<"STEPS: "<<steps<<" ADD: "<<addCount<<endl;
	for(int i=1;i<=steps;i++,cout<<i<<" "<<cstep[steps]<<endl);
	//printf("%d\n",steps);
	//for()
	return 0;
}
