#include<stdio.h>
unsigned long long table[10000]; 
unsigned long long convert(unsigned long long value)
{  
	if(value<10000)
		return table[value];
	return (convert(value/2)+convert(value/3)+convert(value/4));

}
void construct_table()
{
	unsigned long long int a,b,c,i;
	for(i=0;i<12;i++){
		table[i]=i;
	}
	for(i=12;i<10000;i++){
		a=i/2;
		b=i/3;
		c=i/4;
		table[i]=table[a]+table[b]+table[c];
	}
}
using namespace std;
int main()
{
	unsigned long long value;
	construct_table();
	while(scanf("%llu",&value)!=EOF){
		if(value<10000)
			printf("%llu\n",table[value]);
		else
			printf("%llu\n",convert(value));
	}
	return 0;
}
