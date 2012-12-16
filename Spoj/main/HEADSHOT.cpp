using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
int main()
{
	char num[101],temp;
	scanf("%s",num);
	int i;
	float empty=0,bullet=0,emptyNextToBullet=0;
	float PRotateSurvival,PShootSurvival;
	for(i=0;num[i+1]!='\0';i++){
		temp=num[i];
		if(temp=='0'){
			empty++;
			if(num[i+1]=='1')
				emptyNextToBullet++;
		}
		else
			bullet++;
	}
	//cout<<i<<endl;
	if(num[i]=='0'){
		empty++;
		if(num[0]=='1')
			emptyNextToBullet++;
	}
	else
		bullet++;
	//cout<<bullet<<" "<<empty<<endl;
	PRotateSurvival=empty/(empty+bullet);
	PShootSurvival=(empty-emptyNextToBullet)/empty;
	//printf("%f %f\n",PRotateSurvival,PShootSurvival);
	if(PRotateSurvival==PShootSurvival)printf("EQUAL\n");
	else if(PRotateSurvival>PShootSurvival)printf("ROTATE\n");
	else printf("SHOOT\n");
	return 0;
}
