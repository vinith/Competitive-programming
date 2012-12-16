#include<iostream>
#include<string>
using namespace std;
main()
{
	string s,t;
	int n,l,i,j;
	while(cin>>s&&s!="."){
		cin>>n;
		l=s.length();
		for(i=0;i<l;i++){
			t=s.substr(i,l);
			t.append(s.substr(0,i));
			for(j=0;j<n;j++){
				cout<<t;
			}
			cout<<endl;
		}
	}
	
}
