#include<stdio.h>
using namespace std;
int main()
{
	int t,ng,mg,ngm,mgm;
	int max1,max2;
	scanf("%d",&t);
	while(t--){
		printf("\n");
		max1=0;
		max2=0;
		scanf("%d %d",&ng,&mg);
		while(ng--){
			scanf("%d",&ngm);
			if(ngm>max1)max1=ngm;
		}
		while(mg--){
			scanf("%d",&mgm);
			if(mgm>max2)max2=mgm;
		}
		if(max1>=max2)printf("Godzilla\n");
		else printf("MechaGodzilla\n");
	}
	return 0;
}
