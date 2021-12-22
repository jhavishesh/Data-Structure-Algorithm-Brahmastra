/*
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
Examples : Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Naive Approach:
Create vector and push_back negative elements and after that push_back positive elements. */



void move(int arr[],int n)
{
  vector <int> v;

  for(int i=0;i<n;i++)
  {
    if(arr[i]<0)
    v.push_back(arr[i]);

  }

  
  for(int i=0;i<n;i++)
  {
    if(arr[i]>0)
    v.push_back(arr[i]);

  }

  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }


}

// Optimal Solution : Two Pointer approach in which 0 acts as pivot elements.


void move(int arr[],int n)
{
    int i=0;
    int j=n-1;

    while(1)
    {
      while(arr[i]<0 && i<j)
      {
          i++;
      }
    while(arr[j]>0 && i<j)
        j--;

      if(i<j)
      {
          swap(arr[i],arr[j]);
          i++;
          j--;
         
      }
      else
       break;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


  

}
