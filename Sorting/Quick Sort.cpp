//Considering the first element as the pivot element



#include <iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];

    while(i<j)
    {
        if(pivot>=arr[i])
            i++;
        if(pivot<=arr[j])
            j--;
        
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);

    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot=partition(arr,low,high);

        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
void dp(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quicksort(arr,0,n-1);
        dp(arr,n);
}
