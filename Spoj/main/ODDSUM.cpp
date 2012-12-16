#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	int i=1;
	while(t--){
		cin>>a;
		if(cin.eof())
		break;
		cin>>b;
		if(cin.eof())
		break;		
		cout<<"Case "<<i++<<": ";
		if(a==1)
			cout<<((b+1)/2)*(b+1)/2<<endl;
		else{
			if(a%2==0)a++;
			cout<<(b+1)/2*(b+1)/2-(a-1)/2*(a-1)/2<<endl;
		}
	}
	return 0;
}
