#include<iostream>
using namespace std;
int main()
{
	int attackers,defenders,count;
	unsigned int attack_min,attack_dist,defend_dist;
	while(cin>>attackers>>defenders){
		if((attackers==0)&&(defenders==0)){
			break;
		}
		count=0;
		attack_min=99999;
		while(attackers--){
			cin>>attack_dist;
			if(attack_dist<attack_min) attack_min=attack_dist;
		}
		while(defenders--){
			cin>>defend_dist;
			if(defend_dist<=attack_min){
				count++;
			}
		}

		if(count>=2){
			cout<<"N"<<endl;
		}
		else{
			cout<<"Y"<<endl;
		}
	}
	return 0;
}
