using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
long memo[10001];
unsigned long l;
long solve(char *inp,unsigned long index)
{
	long temp;
	if(inp[index]=='0')return 0;
	if(index+1>=l)
		return 1ll;
	else if(memo[index]!=0)
		return memo[index];
	else{    
		
		if(inp[index]>'2' ||(inp[index]=='2' && inp[index+1]>'6')){
			temp=solve(inp,index+1);
			memo[index]=temp;
			return temp;
		}
		else if(inp[index+1]=='0'){
			temp=solve(inp,index+2);
			memo[index]=temp;
			return temp;
		}
		else{
			temp=solve(inp,index+1)+solve(inp,index+2);
			memo[index]=temp;
			return temp;
		}
	}

}
int main()
{
	long ans;
	while(1){
		char inp[10000];
		scanf("%s",inp);
		l=strlen(inp);
		if(inp[0]=='0') break;
		ans=solve(inp,0);
		printf("%ld\n",ans);
		memset(memo,0,sizeof(memo));
	}
	return 0;
}
