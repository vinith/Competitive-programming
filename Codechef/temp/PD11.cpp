#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)&&m!=0&&n!=0){
		int occurence[400]={},answers[20001]={0};
		for(int j=0;j<n;j++){
			char s[21];
			int temp=0;
			scanf("%s",s);
			for(int i=0;i<m;i++)temp=temp+(s[i]-65);
			occurence[temp]++;
		}
		//cout<<"h";
		for(int i=0;i<400;i++)
			answers[occurence[i]]++;
		for(int i=1;i<=n;i++)
			printf("%d\n",answers[i]);
	}
	return 0;
}
