using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
int main()
{
	int t,n;
	for(scanf("%d",&t);t--;){
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		printf("%ld\n",distance(arr,max_element(arr,arr+n))+1);
	}
	return 0;
}
