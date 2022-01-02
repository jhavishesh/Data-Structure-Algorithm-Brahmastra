/*
Given two arrays arr1[] and arr2[] of size N. The task is to make pairs containing values corresponding from arr1 and arr2 i.e. (arr1[0], arr2[0]), (arr1[1],arr2[1]) and so on.
Input Format: The input line contains T, number of testcases. Each testcase contains three lines. The first line contains N size of both arrays. The second and third line contains elements of two arrays separated by space.
Output Format: For each testcase, in a new line, you have to return an array of pairs formed with given arrays.
User task: You need to complete the function corresp_Pair(arr1,arr2,N,res) containing 4 parameters respectively. You don't have to worry about the input. The printing is done by the driver code.
Note: res[] is the resultant pair array where you have to store the corresponding pairs formed.
Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= arr1[i], arr2[j] <= 100
Sample Input:
2
5
1 2 3 4 5
6 7 8 9 10
2
1 2
3 4
Sample Output:
(1,6) (2,7) (3,8) (4,9) (5,10)
(1,3) (2,4)    */

void corres_Pair(int arr1[], int arr2[], int N, pair<int, int> res[])
{
    // your code here
    
    for(int i=0;i<N;i++)
    {
        res[i].first=arr1[i];
        res[i].second=arr2[i];
        
    }

}
