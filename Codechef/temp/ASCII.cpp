#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string str;
		cin>>str;
		for(int i=0;str[i]!='\0';){
			string temp;
			if(str[i]=='1'){
				temp.append(str,i,3);
				i+=3;
				//cout<<temp;
				printf("%c",atoi(temp.c_str()));
			}
			else{
				temp.append(str,i,2);
				i+=2;
				//cout<<temp;
				printf("%c",atoi(temp.c_str()));
			}
		}
		printf("\n");
	}
	return 0;
}
