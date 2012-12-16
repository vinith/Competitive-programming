#include<iostream>
using namespace std;
int p(int a,int b,int c)
{
	int x=a*a+b*b-c*c;
	if(!x)
		cout<<"right\n";
	if(x<0)
		cout<<"obtuse\n";
	if(x>0)
		cout<<"acute\n";
}
main()
{
	int a,b,c,g;
	while(cin>>a>>b>>c){
		g=a>b?(a>c?a:c):(b>c?b:c);	
		if(a+b<c||a+c<b||c+b<a)	
			cout<<"none\n";			
		else if(g==a)
			p(b,c,a);
		else if(g==b)
			p(a,c,b);
		else
			p(a,b,c);
	}
}
