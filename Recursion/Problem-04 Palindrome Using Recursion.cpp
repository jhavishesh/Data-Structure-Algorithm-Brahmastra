
//Solution:

#include <iostream>
using namespace std;

bool isPal(string &str,int start,int end)
{   
    int n=str.length();

    if(start>=end)
        return true;
    
    else
        return (str[start]==str[end] && isPal(str,start+1,end-1));

}

int main() {
    string str;
    cin>>str;
    
    int start(0),end(str.length()-1);
    cout<<isPal(str,start,end);
    return 0;
}
