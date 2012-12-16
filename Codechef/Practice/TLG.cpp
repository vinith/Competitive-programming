#include<iostream>
using namespace std;
int main()
{
	unsigned int n,p1,p2,l1=0,l2=0,temp,s1=0,s2=0;
	cin>>n;
	while(n--){
		cin>>p1>>p2;
		s1+=p1;
		s2+=p2;
		if(s1>s2){
			temp=s1-s2;
			l1=temp>l1?temp:l1;
		}else{
			temp=s2-s1;
			l2=temp>l2?temp:l2;
		}
	}
	if(l1>l2)
		cout<<"1 "<<l1;
	else
		cout<<"2 "<<l2;
	return 0;
}
