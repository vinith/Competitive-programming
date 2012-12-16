#include<iostream>
using namespace std;
void kaboom(unsigned long int n)
{
	
	unsigned long int rans=1,count=0;
	while(rans<=n){
		rans*=2;
		count++;		
	}
	count--;
	cout<<count<<endl;
}
using namespace std;
int main()
{
	unsigned long int n;
        while(cin>>n&&n!=0){
		kaboom(n);
	}
	return 0;
} 
