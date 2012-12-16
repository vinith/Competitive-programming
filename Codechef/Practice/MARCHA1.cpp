using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
bool solve(int *notes,int current,int required){
	int used[20][20];
	if(current==required)
		return true;
	else{
		for(int i=0;i<n;i++){
			solve(notes,current+arr[i],required);
		}
	}
	return false;
}
int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		int notes[21];
		scanf("%d",&n,&m);
		for(int i=0;i<n;i++)scanf("%d",&notes[i]);
		solve(notes,0,m);
	}

	return 0;
}
