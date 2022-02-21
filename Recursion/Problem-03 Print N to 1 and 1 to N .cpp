//Solution for print N to 1

#include<bits/stdc++.h>
using namespace std;

int Nto1(int n)
{   
    if(n==0)
        return 1;
    
    
    cout<<n<<" ";
    
    return Nto1(n-1);
       
}

int main()
{   
    int n;
    cin>>n;
    Nto1(n);
    return 0;
}


//Solution for print 1 to N

#include<bits/stdc++.h>
using namespace std;

int Nto1(int n)
{   
    if(n==0)
        return 1;
    
    Nto1(n-1);
    
    cout<<n<<" ";
       
}

int main()
{   
    int n;
    cin>>n;
    Nto1(n);
    return 0;
}
