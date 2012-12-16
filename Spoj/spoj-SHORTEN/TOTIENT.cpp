#include<iostream>
using namespace std;
int g(int a,int b)
{
	if(b<1)
		return a;
	else
		g(b,a%b);

}
main()
{
	int t;
	long n,i,c;
	cin>>t;
	while(t--){
		cin>>n;
		c=0;
		for(i=1;i<=n;i++){
			if(g(n,i)==1)
				c++;
		}
	cout<<c<<endl;
	}
}
