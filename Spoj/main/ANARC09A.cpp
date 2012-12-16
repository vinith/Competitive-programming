using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
int main()
{       
	long Case=0;
	while(1){
		Case++;
		char inp[2005],v1,v2;
		stack<char> sta;
		int operations=0;
		scanf("%s",inp);
		if(inp[0]=='-')break;
		for(int i=0;inp[i]!='\0';i++){
			if(sta.empty()){
				sta.push(inp[i]);
			}
			else if(inp[i]=='}'&&sta.top()=='{')		
				sta.pop();
			else 
				sta.push(inp[i]);
		}
		while(!sta.empty()){
			v1=sta.top();sta.pop();
			v2=sta.top();sta.pop();
			if(v1==v2) operations+=1;
			else operations+=2;
		}
		printf("%ld. %d\n",Case,operations);
	}
	return 0;
}
