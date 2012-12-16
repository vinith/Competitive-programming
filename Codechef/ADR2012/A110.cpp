using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
#include<algorithm>
int main()
{
	int n1,n2,n3,temp,tot,count=0;
	scanf("%d %d %d",&n1,&n2,&n3);
	tot=n1+n2+n3;
	map<int,int> id;
	map<int,int>final;
	map<int,int>::iterator it;
	for(int i=0;i<tot;i++){
		scanf("%d",&temp);
		if(id.find(temp)==id.end()){
			id[temp]=1;
		}
		else{
			id[temp]++;
			if(id[temp]==2){
				final[temp]=1;count++;
			}
		}
	}
	printf("%d\n",count);
	for(it=final.begin();it!=final.end();it++){
		printf("%d\n",it->first);
	}
	return 0;
}
