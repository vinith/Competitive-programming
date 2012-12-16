using namespace std;
#include<iostream>
#define size 21
unsigned long long memo[size][size]={0};
unsigned long long grid(int i,int j)
{    
       unsigned long long temp=0;  	
       if(j>size-1||i>size-1)
		return 0;
	if(memo[i][j]!=0){
		return memo[i][j];
	}
	if(i==j&&i==size-1){
		return 1;
	}
	else{
		temp+=grid(i+1,j)+grid(i,j+1);
		memo[i][j]=temp;
		return temp;
	}

}
int main()
{
	cout<<grid(0,0)<<endl;
	return 0;
}

