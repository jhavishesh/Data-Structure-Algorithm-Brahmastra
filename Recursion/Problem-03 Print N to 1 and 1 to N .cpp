//Solution for print N to 1

#include<bits/stdc++.h>
using namespace std;

void NToOne(int n)
{   
    if(n==0)
        return;
    
    
    cout<<n<<" ";
    
    NToOne(n-1);
       
}

int main()
{   
    int n;
    cin>>n;
    NToOne(n);
    return 0;
}


//Solution for print 1 to N

#include<bits/stdc++.h>
using namespace std;

void OneToN(int n)
{   
    if(n==0)
        return;
    
    OneToN(n-1);
    
    cout<<n<<" ";
       
}

int main()
{   
    int n;
    cin>>n;
    OneToN(n);
    return 0;
}
