#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string str,str1;
	int n,l,i,j;
	while(cin>>str&&str.compare(".")){
		cin>>n;
		l=str.length();
		for(i=0;i<l;i++){
			str1=str.substr(i,l);
			//cout<<str.substr(i,l);
			//cout<<str1<<endl;
			str1.append(str.substr(0,i));
			for(j=0;j<n;j++){
				cout<<str1;
			}
			cout<<endl;
		}
	}
	return 0;
}
