//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118626/offering/1377975

//Solution:


string convertString(string str) 
{
	str[0]=toupper(str[0]);
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
           str[i+1]=toupper(str[i+1]);
    }
    return str;
}
