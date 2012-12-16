#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int max1,max2,value,out,l;
	//bool oper;
	char t[10];
	int n;
	cin.getline(t,sizeof(t));
	sscanf(t,"%d%*s",&n);
	while(n--){	
		int table[26]={0};
		char diary[1001];
		cin.getline(diary,1001);
		l=strlen(diary);
		//cout<<diary<<endl;
		for(int i=0;i<l;i++){
			if(diary[i]!=' ')
				table[diary[i]-65]++;
		}
		//for(int i=0;i<26;i++)cout<<table[i]<<" ";
		if(table[0]>table[1]){
			max1=0;
			max2=1;
		}
		else{
			max1=1;
			max2=0;
		}
		for(int i=2;i<=25;i++){
			if(table[i]>table[max1]){
				max2=max1;
				max1=i;
			}
			else if(table[i]==table[max1]||table[i]>table[max2]){
				max2=i;
			}
		}
		//cout<<table[max1]<<" "<<table[max2]<<endl;
		if(table[max1]==table[max2]){
			cout<<"NOT POSSIBLE";
		}
		else{
			value=max1+65-'E';
			//oper=0; //add
			if(value<0){
				value+=26;
				//oper=1; //subtr
				//cout<<value<<endl;
			}
			cout<<value<<" ";
			for(int i=0;i<l;i++){
				if(diary[i]==' ')
					cout<<' ';


				else{
					out=diary[i]-value;
					if(out<65){
						out=91-(65-out);
					}
					printf("%c",out);
				}

			}
		}
		cout<<endl;

	}
	return 0;
}

