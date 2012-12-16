#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{       
	int t,count=0;
	scanf("%d\n",&t);
	while(t--)
	{       bool flag=true;
		string s,n;
		char chr,temp1;
		int index=0,l,count3=0,count5=0,count8=0;
		getline(cin,s);
		l=s.length();
		for(int i=l-1;s[i]!=' ';i--){
			index++;
		}
		n=s.substr(l-index,l-1);
		for(int i=0;i<index;i++){
			temp1=n[i];
			if(temp1=='3')
			count3++;
			else if(temp1=='5')
			count5++;
			else if(temp1=='8')
			count8++;
			else{
				flag=false;
				break;
			}
		}
		if(count8>=count5&&count5>=count3)
		{}
		else
		flag=false;
		s.clear();
		n.clear();
		if(flag)
			count++;
		}
	printf("%d\n",count);
	return 0;
}
