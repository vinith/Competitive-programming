#include<iostream>
#include<math.h>
using namespace std;
unsigned long long m;
unsigned long long *power(unsigned long long int *matrix,unsigned long long p)
{
	unsigned long long *temp=new unsigned long long[4];
	if(p==0){
		temp[0]=temp[3]=1;
		temp[1]=temp[2]=0;
		return temp;
	}
	else if(p==1){
		return matrix;
	}
	else if(p%2==0){
		temp[0]=(matrix[0]*matrix[0]+matrix[1]*matrix[2]);//%m;	
		temp[1]=(matrix[0]*matrix[1]+matrix[1]*matrix[3]);//%m;
		temp[2]=(matrix[2]*matrix[0]+matrix[3]*matrix[2]);//%m;
		temp[3]=(matrix[2]*matrix[1]+matrix[3]*matrix[3]);//%m;

		return power(temp,p/2);
	}
	else {
		unsigned long long *temp1=new unsigned long long[4];
		temp[0]=(matrix[0]*matrix[0]+matrix[1]*matrix[2]);//%m; 
		temp[1]=(matrix[0]*matrix[1]+matrix[1]*matrix[3]);//%m;
		temp[2]=(matrix[2]*matrix[0]+matrix[3]*matrix[2]);//%m;
		temp[3]=(matrix[2]*matrix[1]+matrix[3]*matrix[3]);//%m;
		temp1=power(temp,(p-1)/2);
		temp[0]=(matrix[0]*temp[0]+matrix[1]*temp[2]);//%m; 
                temp[1]=(matrix[0]*temp[1]+matrix[1]*temp[3]);//%m;
                temp[2]=(matrix[2]*temp[0]+matrix[3]*temp[2]);//%m;
                temp[3]=(matrix[2]*temp[1]+matrix[3]*temp[3]);//%m;
		return temp;
	}

}
int main()
{
	unsigned long long matrix[]={1,1,1,0},*temp,answer;
	int t;
	unsigned long long n;
	cin>>t;
	while(t--){
		cin>>n>>m;
		m=pow(2,m);
		temp=power(matrix,n);
		cout<<temp[0]<<endl;
		m=0;
	}


	return 0;
}
