using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>

#define direct 1
#define fof 2
int main()
{         
	map <int,int> frnd;
	int n,m,temp,count=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&temp);
		if(frnd[temp]==fof)count--;
		frnd[temp]=direct;
		scanf("%d",&m);
		while(m--){
			scanf("%d",&temp);
			if(frnd.find(temp)==frnd.end()){
				count++;
				frnd[temp]=fof;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
