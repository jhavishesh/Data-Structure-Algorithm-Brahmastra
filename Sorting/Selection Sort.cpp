#include<bits/stdc++.h>
using namespace std;

void sel(int arr[],int n)
{
       int i,j,mi;

       for(i=0;i<n-1;i++)
       {
           mi=i;
           for(j=i+1;j<n;j++)
           {
               if(arr[j]<arr[mi])
                    mi=j;
           }
           swap(arr[mi],arr[i]);
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
    sel(arr,n);

    cout<<"\nAfter Sorting"<<endl;
    print(arr,n);


    return 0;
}
