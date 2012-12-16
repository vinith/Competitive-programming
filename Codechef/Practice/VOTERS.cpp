using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
#include<algorithm>
inline int read()
{
	char temp;
	int x=0;
	temp=getchar_unlocked();
	while(temp<48)temp=getchar_unlocked();
	x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=x*10;
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	return x; 
}
int main()
{
	int n1,n2,n3,temp,tot,count=0;
	n1=read();n2=read();n3=read();
	tot=n1+n2+n3;
	map<int,int> id;
	map<int,int>::iterator it;
	int final[50001];
	for(int i=0;i<tot;i++){
		temp=read();
		if(id.find(temp)==id.end()){
			id[temp]=1;
		}
		else{
			id[temp]++;
		}
	}
	for(it=id.begin();it!=id.end();it++){
                if(it->second>=2){final[count]=it->first;count++;}
        }
	printf("%d\n",count);
	for(int i=0;i<count;i++){
	     printf("%d\n",final[i]);
	}
	return 0;
}
