using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define size 200001
inline int read()
{
	 char temp;
	register int x=0;
	temp=getchar_unlocked();
	while(temp<48)temp=getchar_unlocked();
	x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x*=10;
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	return x; 
}
long long invcnt=0;
int n;
int temp[size];
int arr[size];
void merge(int *arr,int start,int middle,int end)
{
	int p1,p2,index;
	//long *temp=new long[sizeof(int)*n];
        //long temp[n];
	index=p1=start;
	p2=middle+1;
	if(arr[middle]<=arr[p2]){
		for(;p1<=middle;p1++,index++)
                        temp[index]=arr[p1];
		for(;p2<=end;p2++,index++)
			temp[index]=arr[p2];	
		goto flag;
	}
	while(p1<=middle&&p2<=end){
		if(arr[p1]>arr[p2]){
			invcnt+=(middle-p1+1);
			temp[index]=arr[p2];
			index++;p2++;
		}
		else{
			temp[index]=arr[p1];
			index++;p1++;
		}
	}
	if(p1<=middle){//first half not yet fully merged
		for(;p1<=middle;p1++,index++)
			temp[index]=arr[p1];
	}
	else{
		for(;p2<=end;p2++,index++)
			temp[index]=arr[p2];
	}
	flag:
	for(int i=start;i<=end;i++)
		arr[i]=temp[i];
        //delete(temp);
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
	int t;
	//scanf("%d",&t);
	t=read();
	while(t--){
	//scanf("%d",&n);
	n=read();
	for(int i=0;i<n;i++)
		arr[i]=read();
	invcnt=0;
	mergeSort(arr,n);
	printf("%lld\n",invcnt);
	}
	return 0;
}
