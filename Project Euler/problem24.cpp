using namespace std;
#include<iostream>
#include<algorithm>
#define size 1000000
int main()
{
	int perm[]={0,1,2,3,4,5,6,7,8,9};
	int count=1;
	while(1){
		count++;
		next_permutation(perm,perm+10);
		if(count==size){
			for(int i=0;i<=9;i++)
				cout<<perm[i];
			cout<<endl;
			break;
		}
	}
	return 0;
}
