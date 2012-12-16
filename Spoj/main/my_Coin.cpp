#include<stdio.h>
int count=0;
unsigned long long table[10000]={0};
unsigned long long omg_convert(unsigned long long value)
{  
	unsigned long long c1,c2,c3,calc;
	if(value>11){
		c1=value/2;
		c2=value/3;
		c3=value/4;
		calc=c1+c2+c3;
	}
	else calc=0;
	if(calc>value&&value>11){
		return omg_convert(c1)+omg_convert(c2)+omg_convert(c3);
	}
	else{     
		if(value==0) return 0;
		if(table[value]==0){
			table[value]=value;
			return value;
		}
		count++;
		return table[value];
		
	}

}
using namespace std;
int main()
{
	unsigned long long value,i;
	for(i=0;i<10000;i++){
		omg_convert(i);
	} 
	while(scanf("%llu",&value)==1){
		printf("%llu\n",omg_convert(value));
                printf("\ntabe used=%d\n",count);
	}
	printf("\ntabe used=%d\n",count);
	return 0;
}
