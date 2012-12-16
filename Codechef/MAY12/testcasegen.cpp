using namespace std;
#include<iostream>
typedef long long ll;
int main()
{
ll i,j,count;
count=0;
for(int j=500;j<=10000;j++)for(int i=500;i<=10000;i++,count++)cout<<j<<" "<<i<<endl;
cout<<count;
return 0;
}
