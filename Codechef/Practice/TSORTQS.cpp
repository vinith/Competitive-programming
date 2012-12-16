using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
int n;
void quickSort(int *arr,int start,int end)
{
	int i=start,j=end,temp,pivot;
	pivot=arr[(start+end)/2];
	do
	{      
		while(arr[i]<pivot)i++;
		while(arr[j]>pivot)j--;
		if(i<=j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;j--;
		}
	}while(i<=j);
	printf("start-%d  end-%d\n",start,end);
	cout<<pivot<<"--->";
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\ni-%d  j-%d\n\n",i,j);
	if(start<j)quickSort(arr,start,j);
	if(end>i)quickSort(arr,i,end);
}
int main()
{
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
