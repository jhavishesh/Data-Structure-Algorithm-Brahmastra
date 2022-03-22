

//Solution:

#include <bits/stdc++.h>
using namespace std;

bool isSubSeq(string s1, string s2, int n, int m){
    int j = 0;
    
    for(int i = 0; i < n && j < m; i++){
        if(s1[i] == s2[j])
        j++;
    }
    
    return j == m;
}

int main() {
	int n,m;
	string s1, s2;
	cin>>n>>m;
	cin>>s1>>s2;
	
	cout<<boolalpha<<isSubSeq(s1, s2, n, m);
	
	return 0;
}
