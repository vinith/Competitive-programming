#include<iostream>
using namespace std;
class googleSearch
{
	public:
		string url;
}obj[10];
int main()
{ 
	int max,casE=0;
	int t,relevance[10];
	cin>>t;
	while(t--){
		max=-5;
		casE++;
		for(int i=0;i<10;i++){
			cin>>obj[i].url>>relevance[i];
			if(relevance[i]>max) max=relevance[i];
		}
		cout<<"Case #"<<casE<<":"<<endl;
		for(int i=0;i<10;i++){
			if(relevance[i]==max) cout<<obj[i].url<<endl;
		}
	}
	return 0;
}
