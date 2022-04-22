#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n)
{
        int i,j;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                    swap(arr[j+1],arr[j]);
            }
        }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
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
    bubble(arr,n);

    cout<<"\nAfter Sorting"<<endl;
    print(arr,n);


    return 0;
}
