#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
#define abss(X) (((X)<0)?(-(X)):(X))
int main()
{
	int n,temp1,temp2,i;
	scanf("%d",&n);
	while(n--){
		char name1[1000000],name2[1000000];
		int count1[26]={0},count2[26]={0},diff;
		int ar[6]={0};
		scanf("%s\n%s",name1,name2);
		int start=0,offset;
		//printf("%d %d\n",abs(3-2),abs(2-3));
		diff=0;
		for(i=0;name1[i]!='\0'&&name2[i]!='\0';i++){
			temp1=toupper(name1[i]);
			temp2=toupper(name2[i]);
			count1[temp1-65]++;
			count2[temp2-65]++;
		}
		if(name1[i]=='\0'&&name2[i]!='\0'){
			//cout<<2<<endl;
			for(int j=i;name2[j]!='\0';j++){
				temp1=toupper(name2[j]);
				count2[temp1-65]++;
			}
		}
		else if(name1[i]!='\0'&&name2[i]=='\0'){
			//cout<<1<<endl;
			for(int j=i;name1[j]!='\0';j++){
                                temp1=toupper(name1[j]);
                                count1[temp1-65]++;
                        }

		}
		for(int k=0;k<26;k++){
			diff=diff+abss(count1[k]-count2[k]);		
		}
		//cout<<diff<<endl;
		for(int i=6;i>1;i--){
			offset=(diff%i)-1;
			if(offset<0)
				offset+=i;
			//cout<<"here"<<endl;
			//printf("start is %d and offset is %d\n",start,offset);
			for(int j=0;j<offset;j++){
				start=(start+1)%6;
				if(ar[start]==0){
					continue;
				}
				else{
					while(ar[start]!=0)
						start=(start+1)%6;
				}
			}
			//printf("striking out element at %d\n",start);
			ar[start]=1;
			start=(start+1)%6;
			if(ar[start]==0)
				continue;
			else{
				while(ar[start]!=0)
					start=(start+1)%6;
			}
		}
		for(int k=0;k<6;k++){
			if(ar[k]==0){
				//cout<<ar[k]<<endl;
				switch(k){
					case 0: printf("FRIENDS\n");
						break;
					case 1: printf("LOVE\n");
						break;
					case 2: printf("ADORE\n");
						break;
					case 3: printf("MARRIAGE\n");
						break;
					case 4: printf("ENEMIES\n");
						break;
					case 5: printf("SISTER\n");
						break;
				}
				break;
			}
		}
	}
	return 0;
}
