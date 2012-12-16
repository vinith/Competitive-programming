using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>

int main()
{
	int t,temp;
	bool ans;
	scanf("%d",&t);
	while(t--){
		ans=true;
		char p[27];
		scanf("%s",p);
		for(int i=0;i<26;i++){
			temp=p[p[i]-65]-65;
			//printf("%c==%c\n",i+65,p[temp]);
			if(i!=temp){
				ans=false;
				break;
			}
		}
		if(ans)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
