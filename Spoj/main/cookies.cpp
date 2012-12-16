#include<iostream>
using namespace std;
int main()
{
int t,n,a,d;
cin>>t;
while(t--){
cin>>n>>a>>d;
cout<<(n*0.5)*((2*a)+(n-1)*d)<<endl;
}
return 0;
}
