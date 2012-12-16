#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
long long max=0;
void omg_convert(long long value)
{  
	long long c1,c2,c3,calc;
	c1=floor(value/2);
	c2=floor(value/3);
	c3=floor(value/4);
	calc=c1+c2+c3;
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
	long long value;
	while((cin>>value)&&(!cin.eof())){
		omg_convert(value);
		cout<<::max<<endl;
		::max=0;
	}
	return 0;
}
