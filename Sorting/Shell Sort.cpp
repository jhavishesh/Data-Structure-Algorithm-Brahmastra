#include <bits/stdc++.h>
using namespace std;
void shell(int arr[],int n)
{
   int i,j,temp,gap;

   for(gap=n/2;gap>0;gap/=2)
   {
       for(i=gap;i<n;i++)
       {
           temp=arr[i];

           for(j=i;j>=gap && arr[j-gap]>temp; j-=gap )
           {
               arr[j]=arr[j-gap];
           }

           arr[j]=temp;
       }
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

    shell(arr,n);
    
    cout<<"\nAfter Sorting"<<endl;
    print(arr,n);
}
