#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		char st[100];
		map <string,int> bank;
		scanf("%d\n",&n);
		while(n--){
			gets(st);
			bank[st]++;
		}
		map<string,int>::iterator i,e;
		e=bank.end();
		for(i=bank.begin();i!=e;i++){
		printf("%s %d\n",i->first.c_str(),i->second);
		}
	}
	return 0;
}
