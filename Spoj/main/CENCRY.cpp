#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	int vowels[]={'a','e','i','o','u'};
	int consonants[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	int offset[]={0,0,1,2,1,3,4,5,2,6,7,8,9,10,3,11,12,13,14,15,4,16,17,18,19,20};
	unsigned long long n,i;
	//char str[500000];
	scanf("%llu",&n);
	int temp;
	while(n--)
	{
		int occurence[26]={0};
		char str[500000];
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++){
			temp=str[i]-97;
			//cout<<temp;
			occurence[temp]++;
			//cout<<"( "<<occurence[temp]<<" )"<<endl;
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				printf("%c",consonants[(((occurence[temp]-1)*5)+offset[temp])%21]);
				//printf("%d",((occurence[temp]-1)*5)%21);
			}
			else
				printf("%c",vowels[(((occurence[temp]-1)*21)+offset[temp])%5]);
				//printf("%d",(((occurence[temp]-1)*21)+offset[temp])%5);
		}
		printf("\n");
	}
	return 0;
}
