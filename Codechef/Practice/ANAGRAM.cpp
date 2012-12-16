#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char s1[100],s2[100];
		int a[26]={0};
		int b[26]={0};
		int temp;
		bool flag=1;;
		scanf("%s %s",s1,s2);
		for(int i=0;s1[i]!='\0';i++){
			temp=s1[i];
			a[temp-97]++;
		}
		for(int i=0;s2[i]!='\0';i++){
			temp=s2[i];
			b[temp-97]++;
		} 
		for(int i=0;i<26;i++){
			if(a[i]!=b[i]){
				flag=0;
				//printf("%c",a[i]+97);
				break;
			}
			//printf("%d %d--->",a[i],b[i]);
		}
		if(!flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
