#include <iostream>
using namespace std;

//Method 1:  O(1)
int decToBinary(int n)
{
	// Size of an integer is assumed to be 32 bits
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

// driver code
int main()
{
	int n = 32;
	decToBinary(n);
}

//Method 2:

void bi(int n)
{
int x=32;
int bin[x];

   for(int i=31;i>0;i--)
   {
       int rem=n%2;
       bin[i]=rem;
       n/=2;
   }

    reverse(bin,bin+x);
   for(int i=0;i<31;i++)
   {
       cout<<bin[i]<<" ";
   }   }
