#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double x,y,x1,y1,previous;
	scanf("%*[^(]%*c%lf%*c%lf",&x1,&y1);
	while(scanf("%*[^(]%*c%lf%*c%lf",&x,&y)!=EOF){
		cout.precision(3);
		previous+=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
		x1=x;
		y1=y;
		cout<<fixed<<"The salesman has traveled a total of "<<previous<<" kilometers."<<endl;
	}
	return 0;
}
