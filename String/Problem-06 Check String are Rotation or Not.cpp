/* https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/ */


#include<bits/stdc++.h>
using namespace std;

bool arerotation(string str1,string str2){

  int n1=str1.length();//find the size of str1
  int n2=str2.length();//find the size of str2

  string temp =str1+str1;
  if(n1!=n2) //if size is not equal then they can't form rotation
    return false;
  
  return(temp.find(str2)!=string::npos);//find substr of str2 in temp
}
int main()
{
  string str1,str2;
  getline(cin,str1);
  getline(cin,str2);
  if(arerotation(str1,str2))
      cout<<"Rotation of one another";
  else
      cout<<"Not a Rotation of one another";

return 0;
  
}
