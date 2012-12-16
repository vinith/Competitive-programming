#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        int stat=0,l,values[5],counter=0;
        char input[11];
        for(int i=0;i<5;i++){
                cin>>input;
                l=strlen(input);
                                for(int j=0;j<l-1;j++){
                        if(input[j]=='F'&&input[j+1]=='B'&&input[j+2]=='I'){
                                stat=1;
                                values[counter]=i+1;
				cout<<"Values["<<counter<<"]="<<values[counter]<<endl;
                                counter++;
			 }
                }
        }
	cout<<values[counter-1]<<endl;
        if(stat==1){
                for(int i=0;i<counter;i++){
                        cout<<values[i]<<" ";
                }
		cout<<endl;
        }
        else cout<<"HE GOT AWAY!"<<endl;
        return 0;
}
