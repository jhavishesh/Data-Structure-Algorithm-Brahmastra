
/*  https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/ */


void rearrange(int arr[], int n)
{
	int i = -1, j = n;   // set the pointer

	while (i < j)   // 
	{
		while(i <= n - 1 and arr[i] > 0)  //count positive elements 
			i += 1;
		while (j >= 0 and arr[j] < 0)        // count negative elements 
			j -= 1;           
		if (i < j)
			swap(arr[i], arr[j]);           //arrange all positive first and negative after that.
	}

	if (i == 0 || i == n)  //edge case to handle there is no positive & negative elements 
		return;

	
	int k = 0;
	while (k < n && i < n)    // this loop for the arranging the alternate pos & neg elements 
  {                        // here i is on the negative element so we increment by 1 only and k is on positive so we increment by 2 
	
		swap(arr[k], arr[i]);
		i = i + 1;  // for negtive element increment
		k = k + 2;
	}
}
