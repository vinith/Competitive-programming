#include<iostream>
using namespace std;
int main()
{
	int t,i;
	unsigned long long avg;
	unsigned long long ans;
	while(cin>>t && t!=-1){
		avg=0;
		int input[10000];
		for(i=0;i<t;i++){
			cin>>input[i];
			avg+=input[i];
		}
		if(avg%t==0){
			avg/=t;
			ans=0;
			for(i=0;i<t;i++){
				if(input[i]>avg)
					ans+=(input[i]-avg);
			}
			cout<<ans<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
