#include<bits/stdc++.h>
using namespace std;

//This code is developed by Vishesh Jha

void merge(int arr[],int l,int mid,int r)
{
	int temp[r+1];
	int idx1(l);
	int idx2(mid+1);
	int x=l;

	while(idx1<=mid and idx2<=r)
	{
		if(arr[idx1]<arr[idx2])
			temp[x++]=arr[idx1++];
		else
			temp[x++]=arr[idx2++];
	}

	while(idx1<=mid)
		temp[x++]=arr[idx1++];
	while(idx2<=r)
		temp[x++]=arr[idx2++];


	for(int i=l;i<=r;i++)
		arr[i]=temp[i];
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{

	int mid = l+(r-l)/2;

	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<"Before Sorting"<<endl;
	print(arr,n);

	mergeSort(arr,0,n-1);

	cout<<"\nAfter Sorting"<<endl;
	print(arr,n);


}

