#include <bits/stdc++.h>
using namespace std;
void ins(int arr[],int n)
{
   int i,j,key;

   for(int i=1;i<n;i++)
   {
       key=arr[i];
       j=i-1;

       while(j>=0 && arr[j]>key)
       {
            arr[j+1]=arr[j];
            j--;
       }
       arr[j+1]=key;
   }
    
}

void print(int arr[],int n)
{
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"Before Sorting"<<endl;
    print(arr,n);

    ins(arr,n);
    
    cout<<"\nAfter Sorting"<<endl;
    print(arr,n);
}
