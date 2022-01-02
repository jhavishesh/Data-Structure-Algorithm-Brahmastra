/*  https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#  */



// Naive Sol: O(Nlogn)+O(N

int findLongestConseqSubseq(int arr[], int N)
{
      
sort(arr, arr+N);
        
	int ctr = 1, maxi = 0;
        
	for(int i = 1; i < N; i++)  //starting from second element if start from 0 we need to run till n-2 .
        
		if(arr[i] == arr[i - 1]) continue;
		else if(arr[i]-arr[i - 1] ==  1) ctr++; // consecutive element - update current streak length
		else maxi = max(maxi, ctr), ctr = 1;  // reset current streak length
        
	return max(maxi, ctr);
    }


//Optimal Sol: O(N)+O(N)+O(N)=O(3N).


int findLongestConseqSubseq(int arr[], int N)
 {
      
 set <int> hashset;      //insertation & traversal is easy
      for(int i=0;i<N;i++)
      {
          hashset.insert(arr[i]); //pushback of arr in hash
      }
      
      int longeststreak=0;   //initilize the result streak
      
      for(auto num:hashset)
      {
          if(!hashset.count(num-1)){     // checking for every element that there nums-1 is present or not 
              
              int currentnum=num;         // storing element in currentnum
              int currentstreak=1;        // all stored in hash so count start from 1
              
              while(hashset.count(currentnum+1)){  // we start from minimal element and increment the count until next element is not present
                  currentnum+=1;
                  currentstreak+=1;     //incrementing the count as well
              }
              
             longeststreak=max(longeststreak,currentstreak);  // taking the maximum streak value
          }
          
      }
      return longeststreak;   // returning the maximum streak value
    }
