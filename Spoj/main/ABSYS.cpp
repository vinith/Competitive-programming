#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define g cin.ignore();
int check(string s)
{
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='m')
			return 1;
	}
	return 0;

}
using namespace std;
int main()
{
	int t,n1,n2,n3;
	string s1,s2,s3;
	cin>>t;
	while(t--){
		cin>>s1;
		g g g
			cin>>s2;
		g g
			cin>>s3;
		//cout<<s1;
		//cout<<" "<<s2;
		//cout<<" "<<s3;
		if(check(s1))
			cout<<atoi(s3.c_str())-atoi(s2.c_str())<<" + "<<s2<<" = "<<s3<<endl;
		else if(check(s2))
			cout<<s1<<" + "<<atoi(s3.c_str())-atoi(s1.c_str())<<" = "<<s3<<endl;
		else
			cout<<s1<<" + "<<s2<<" = "<<atoi(s1.c_str())+atoi(s2.c_str())<<endl;

	}
}
