#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
#define out(a,b) cout<<fixed<<setprecision(4)<<a<<" "<<b<<endl
int main()
{
	unsigned int t,count=1;
	float n;
	char u[3];
	cin>>t;
	while(t--){
		cin>>n>>u;
		if(!strcmp("kg",u)){
			cout<<count++<<" ";
			out(2.2046*n,"lb");
		}
		else if(!strcmp("lb",u)){
			cout<<count++<<" ";
			out(0.4536*n,"kg");
		}
		else if(!strcmp("l",u)){
			cout<<count++<<" ";
			out(0.2642*n,"g");
		}
		else{
			cout<<count++<<" ";
			out(3.7854*n,"l");
		}

	}
	return 0;
}
