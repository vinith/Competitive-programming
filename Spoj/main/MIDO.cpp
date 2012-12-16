#include<iostream>
using namespace std;
int main()
{
	unsigned int t,count1=0,count2=0;
	unsigned int team,min,sec,minp=0,secp=0,lead1=0,lead2=0,teamp;
	char x;
	cin>>t;
	while(t--){
		cin>>team>>min>>x>>sec;
		if(team==1){
			count1++;
			if(minp==0&&secp==0){
				minp=min;
				secp=sec;
			}
			else if(count1>count2){
				lead1+=(min*60+sec)-(minp*60+secp);
				minp=min;
				secp=sec;
			}
			else if(count2>count1){
				lead2+=(min*60+sec)-(minp*60+secp);
				minp=min;
				secp=sec;
			}
			else{
				
				if(teamp==2){
					//lead1+=(min*60+sec)-(minp*60+secp);
					minp=min;
					secp=sec;
				}
				else{
					lead2+=(min*60+sec)-(minp*60+secp);
					minp=min;
					secp=sec;
				}
			}
		}
		else{
			count2++;
			if(minp==0&&secp==0){
				minp=min;
				secp=sec;
			}
			else if(count1>count2){
				lead2+=(min*60+sec-minp*60+secp);
				minp=min;
				secp=sec;
			}
			else if(count2>count1){
				lead2+=(min*60+sec)-(minp*60+secp);
				minp=min;
				secp=sec;
			}
			else{
				if(teamp==1){
					lead1+=(min*60+sec)-(minp*60+secp);
					minp=min;
					secp=sec;
				}
				else{   
					//lead2+=(min*60+sec)-(minp*60+secp);
					minp=min;
					secp=sec;
				}
			}
		}
		teamp=team;
		cout<<lead1<<endl;
		cout<<lead2<<endl;

	}
	if(teamp==1){
		cout<<lead1+(48*60)-(minp*60+secp)<<endl;
		cout<<lead2<<endl;
	}
	else{
		cout<<lead1<<endl;
		cout<<lead2+(48*60)-(minp*60+secp)<<endl;

	}
	return 0;
}
