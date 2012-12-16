#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1;
	char test;
	bool status=1;
	while((getline(cin,s1,'\n'))&&(s1!="*")){//while not eql to *
		test='\0';
		for(int k=0;s1[k]!='\0';k++){
	         if(s1[k]!=' '){
			test=toupper(s1[k]);
			break;
		}
		}
		status=1;
		if(test!='\0'){
			for(int i=0;s1[i]!='\0';i++){
				if(s1[i]==' '&&s1[i+1]!=' '&&s1[i+1]!='\0'){
					if(toupper(s1[i+1])!=test){
						status=0;
						break;
					}
				}
			}
			if(status==1)cout<<"Y"<<endl;
			else cout<<"N"<<endl;
		}
	}
	return 0;
}
