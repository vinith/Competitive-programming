#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s&&!cin.eof()){
		if(s[s.length()-1]=='0'||s[s.length()-1]=='5')
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
