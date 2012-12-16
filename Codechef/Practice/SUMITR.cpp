#include<iostream>
using namespace std;
#define x(a,b) a>b?a:b
main(){int t,n,i,j;cin>>t;while(t--){cin>>n;int m[99][99];for(i=0;i<n;i++){for(j=0;j<=i;j++){cin>>m[i][j];}}while(n--){for(j=0;j<n;j++){m[n-1][j]+=x(m[n][j],m[n][j+1]);}}cout<<m[0][0]<<endl;}}
