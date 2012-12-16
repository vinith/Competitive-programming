using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>
int main()
{
	int t,n;
	map <int,bool> arr;
	map<int,bool>::iterator it;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		arr[n]=true;
	}
	for(it=arr.begin();it!=arr.end();it++){
		printf("%d\n",it->first);
	}
	return 0;
}
