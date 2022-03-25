// https://practice.geeksforgeeks.org/problems/run-length-encoding/1


//Solution:

string encode(string src)
{ 
  string res;
  for(int i=0;i<src.length();i++)
  {   int ctr(1);
      while(i<src.length()-1 && src[i]==src[i+1])
      {
        ctr++;
      
      i++;
      }
        res+=src[i];
        res+=to_string(ctr);
  }
  return res;
}     
 
