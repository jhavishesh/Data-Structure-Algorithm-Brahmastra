/* https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/  */



//Solution:

#include<bits/stdc++.h>
using namespace std;


void duplicatechar(string str){

unordered_map <char ,int> mp;

for(int i=0;i<str.length();i++)
    mp[str[i]]++;

  
for(auto x:mp)
  if(x.second>1)
  cout<<x.first<<x.second<<endl;


}
int main(){

  string str;
  getline(cin,str);

  duplicatechar(str);
}
