#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.14159265358979323846264338327950288419716939937510
int main()
{
	unsigned long long n;
	unsigned int t;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1||n==0)
			cout<<1<<endl;
		else{
			n=floor((log(2*pi*n)/2+n*(log(n)-1))/log(10))+1;
			cout<<n<<endl;
		}
	}
	return 0;
}
