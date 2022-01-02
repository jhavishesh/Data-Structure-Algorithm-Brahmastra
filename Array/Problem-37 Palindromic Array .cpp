/*  https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1#  */



//Solution: 


int PalinArray(int a[], int n)
{
        
       int rem,temp,rev;    
      
       for(int i=0;i<n;i++){  //traversing the loop and check for the each element
           
           rev=0;
           temp=0;
           temp =a[i];
           while(temp>0){     //perform checking the palindrome number. 
           
           rem= temp%10;
           rev= (rev*10)+rem;  
           temp= temp/10;

       }
        if(rev!=a[i])   // it is obvious 
           return 0;
        
       }
    return 1;   
}
