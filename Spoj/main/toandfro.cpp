#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[201];
	int n;
	unsigned int value,l,times,temp;
	while(cin>>n&&n!=0){
		cin>>s1;
		temp=0;
		l=strlen(s1)/n;
		for(int i=1;i<=n;i++){
			value=1;
			times=0;
				while(times+2<=l){
				cout<<s1[value-1+temp]<<s1[value+(2*n)-2-temp];
				value+=(2*n);
				times+=2;
				
			}
			if(l%2!=0)
			cout<<s1[value-1+temp];
			temp++;
		}
		cout<<endl;

	}
	return 0;
}
