using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char *s,int start,int end)
{
	if(start==end)
		cout<<s<<endl;
	else{
		for(int j=start;j<=end;j++){
			swap(s[start],s[j]);
			permute(s,start+1,end);
			swap(s[start],s[j]);
		}
	}

}
int main()
{  
    char str[]="123"; 
    permute(str,0,2);
	return 0;
}
