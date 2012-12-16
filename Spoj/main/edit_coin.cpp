#include<stdio.h>
using namespace std;
long long max=0;
void omg_convert(unsigned long long value)
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
		omg_convert(c1);
		omg_convert(c2);
		omg_convert(c3);
	}
	else{
		::max+=value;
	}

}
using namespace std;
int main()
{
	unsigned long long value;
	while(scanf("%llu",&value)==1){
		omg_convert(value);
		printf("%llu\n",::max);
		::max=0;
	}
	return 0;
}
