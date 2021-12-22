/*Reverse a String 
https://practice.geeksforgeeks.org/problems/reverse-a-string/1  */

// Method :1    TC->O(n)
  
string reverseWord(string str){
    
    
  reverse(str.begin(),str.end());
  
  return str;
  
}



//Method :2       TC-> O(n)

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
