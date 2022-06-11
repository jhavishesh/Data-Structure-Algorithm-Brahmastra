#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int len,int pos,int item)
{
    if(n==len)
        return n;
    
    int idx=pos-1;

    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=item;


    return n+1;
}
void dp(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int len;
    cin>>len;
    for(int i=0;i<len;i++)
    {
            cin>>arr[i];
    }
   
    int pos;
    cin>>pos;
    int item;
    cin>>item;
    insert(arr,n,len,pos,item);
    dp(arr,n);
}
