#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	unsigned int l,count,i;
	double x,x1,y,y1,previous=0;
	cout.precision(3);
	getline(cin,s1);
	l=s1.length();
	for(i=l;s1[i-1]!='(';i--){}
	count=0;
	for(;s1[i]!=',';i++)s2[count++]=s1[i];
	x1=atof(s2.c_str());
	count=0;
	for(i=i+2;s1[i]!=')';i++)s3[count++]=s1[i];
	y1=atof(s3.c_str());

	while(getline(cin,s1)){
	s2='\0';
	s3='\0';
	l=s1.length();
	for(i=l;s1[i-1]!='(';i--){}
        count=0;
        for(;s1[i]!=',';i++)s2[count++]=s1[i];
        x=atof(s2.c_str());
        count=0;
        for(i=i+2;s1[i]!=')';i++)s3[count++]=s1[i];
        y=atof(s3.c_str());
	//cout<<x<<" "<<x1<<" "<<y<<" "<<y1;
	//cout<<x-x1<<" "<<y-y1;
	previous=previous+sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
	x1=x;
	y1=y;
	cout<<"The salesman has traveled a total of ";
	cout<<fixed<<previous<<" kilometers."<<endl;
	}
	return 0;
}
