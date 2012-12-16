using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
int n;
//int temp[1000001];
void merge(int *arr,int start,int middle,int end)
{
	int p1,p2,index;
	//int temp[n];
	index=p1=start;
	p2=middle+1;
	if(arr[middle]<=arr[p2]){
		for(;p1<=middle;p1++,index++)
                        arr[index]=arr[p1];//temp[index]=arr[p1];
		for(;p2<=end;p2++,index++)
			arr[index]=arr[p2];//temp[index]=arr[p2];	
		return;
	}
	while(p1<=middle&&p2<=end){
		if(arr[p1]>arr[p2]){
			arr[index]=arr[p2];//temp[index]=arr[p2];
			index++;p2++;
		}
		else{
			arr[index]=arr[p1];//temp[index]=arr[p1];
			index++;p1++;
		}
	}
	if(p1<=middle){//first half not yet fully merged
		for(;p1<=middle;p1++,index++)
			arr[index]=arr[p1];//temp[index]=arr[p1];
	}
	else{
		for(;p2<=end;p2++,index++)
			arr[index]=arr[p2];//temp[index]=arr[p2];
	}
	//for(int i=start;i<=end;i++)
		//arr[i]=temp[i];
}
void split(int *arr,int start,int end){
	if(start<end){
		int middle=(start+end)/2;
		split(arr,start,middle);
		split(arr,middle+1,end);
		merge(arr,start,middle,end);
	}
}
void mergeSort(int *arr,int end){
	split(arr,0,end-1);
}
int main()
{
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	mergeSort(arr,n);
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
