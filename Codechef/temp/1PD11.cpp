#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)&&m!=0&&n!=0){
		std::map<std::string, int> occurence;
		for(int j=0;j<n;j++){
			string s;
			cin>>s;
			occurence[s]++;
		}
		int answers[20001]={0};
		map<string,int>::const_iterator end,i;
		end=occurence.end();
		for(i=occurence.begin();i!=end;i++)
			answers[i->second]++;
		for(int i=1;i<=n;i++)
			printf("%d\n",answers[i]);
	}
	return 0;
}
