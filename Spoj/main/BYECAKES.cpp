#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float e1,e2,f1,f2,s1,s2,m1,m2;
float x1,x2,x3,x4,maxx;
while(cin>>e1>>f1>>s1>>m1>>e2>>f2>>s2>>m2&&(e1!=-1)){
if(e1<e2)x1=1;
else x1=ceil(e1/e2);
if(f1<f2)x2=1;
else x2=ceil(f1/f2);
if(s1<s2)x3=1;
else x3=ceil(s1/s2);
if(m1<m2)x4=1;
else x4=ceil(m1/m2);
//cout<<x1<<x2<<x3<<x4;
maxx=max(x1,x2);
maxx=max(maxx,x3);
maxx=max(maxx,x4);
if(e1==0&&f1==0&&s1==0&&m1==0)maxx=0;
cout<<static_cast<int>((maxx*e2)-e1)<<" "<<static_cast<int>((maxx*f2)-f1)<<" "<<static_cast<int>((maxx*s2)-s1)<<" "<<static_cast<int>((maxx*m2)-m1)<<endl;
}
return 0;
}
