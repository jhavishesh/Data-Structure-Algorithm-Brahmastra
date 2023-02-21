// Power of 2


#include <iostream>
using namespace std;

bool powof2(int n)
{   

    if(n==1)
        return true ;

    
    else if(n%2!=0 || n<=0)
        return false;
   
    

    return powof2(n/2);

}
int main() {
        int n;
        cin>>n;
        cout<<powof2(n);
}
