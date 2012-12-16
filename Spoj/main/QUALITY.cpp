#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned int t1,t2,t3,team=0;
	int n1,n2,n3,count;
	unsigned long long time;
	while(cin>>t1>>t2>>t3>>n1>>n2>>n3){
		count=time=0;
		team++;
		if(t1!=0){
			count++;
			time+=t1+(1200*(n1-1));
		}
		if(t2!=0){
			count++;
			time+=t2+(1200*(n2-1));
		}
		if(t3!=0){
			count++;
			time+=t3+(1200*(n3-1));
		}
		cout<<"team "<<team<<": "<<count<<", "<<time<<endl;
	}
	return 0;
}
