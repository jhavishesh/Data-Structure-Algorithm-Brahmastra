//Find the maximum and minimum element in an array


//Maximum in Array

int great(int arr[],int n)
{
    
    int lar=arr[0];
    
    for(int i=0;i<n;i++)
    {
          if(arr[i]>lar)
          {
              lar=arr[i];
          }
          
    }
  
  return lar;
}


//Minimum in Array

int great(int arr[],int n)
{
    
    int lar=arr[0];
    
    for(int i=0;i<n;i++)
    {
          if(arr[i]<lar)
          {
              lar=arr[i];
          }
          
    }
  
  return lar;
}

