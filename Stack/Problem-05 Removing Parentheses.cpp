// https://binarysearch.com/room/Floyd-Warshall-XtJleV0YWa?questionsetIndex=2


//Solution:

int solve(string s) {
    
    int open(0),close(0);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            open++;
        
        else if(open)
            open--;
        
        else
            close++;
    }
    return open+close;
}
