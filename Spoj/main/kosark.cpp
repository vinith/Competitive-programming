#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	char c;
	unsigned int team,min,sec,minp,secp,lead1=0,lead2=0,teamp,count1=0,count2=0;
	cin>>n;
	cin>>teamp>>minp>>c>>secp;
	if(teamp==1)
	count1++;
	else
	count2++;
	n--;
	while(n--){
		cin>>team>>min>>c>>sec;
		if(team==1){ // 1 scored
			count1++;
			if(count1>count2){ // 1 scored and is in the lead
				if((count1-1)>count2)//add lead only if one was already leading
				lead1+=(min*60+sec)-(minp*60+secp);
			}
			else if(count2>count1){//1 scored and 2 is still in lead
				lead2+=(min*60+sec)-(minp*60+secp);
			}
			else{ //scores level after 1 scored, so 2 was leading 
				lead2+=(min*60+sec)-(minp*60+secp);
			}
		}  
		else{//2 scored
			//cout<<"2 scored!!!: "<<endl;
			count2++;
			if(count1>count2){ // 2 scored and 1 is still in the lead
				lead1+=(min*60+sec)-(minp*60+secp);
			}
			else if(count2>count1){//2 scored and 2 is in lead
				if((count2-1)>count1)//add lead only if 2 was already leading
				lead2+=(min*60+sec)-(minp*60+secp);
			}
			else{ //scores level after 2 scored, so 1 was leading 
				lead1+=(min*60+sec)-(minp*60+secp);
				
			}               

		}     
		//set current time to previous time;
		minp=min;
		secp=sec;	
		
	}
	if(count2==count1){//scores were level for the rest of the game
	cout<<setw(2)<<setfill('0')<<lead1/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead1%60<<endl;
	cout<<setw(2)<<setfill('0')<<lead2/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead2%60<<endl;
	}
	else if(count1>count2){// 1 was leading for the rest of the game so add lead till final time
	lead1=lead1+(48*60)-(minp*60+secp);
	cout<<setw(2)<<setfill('0')<<lead1/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead1%60<<endl;
	cout<<setw(2)<<setfill('0')<<lead2/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead2%60<<endl;
	}
	else{  // 2 was leading for the rest the game, so add lead till final time
	lead2=lead2+(48*60)-(minp*60+secp);
	cout<<setw(2)<<setfill('0')<<lead1/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead1%60<<endl;
	cout<<setw(2)<<setfill('0')<<lead2/60;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<lead2%60<<endl;
	}
	return 0;
}
