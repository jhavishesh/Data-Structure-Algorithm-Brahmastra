//https://practice.geeksforgeeks.org/problems/implement-atoi/1


//Solution:



//Updated and clean code of the below code.
int atoi(string str) {
        
        int i(0),flag(0),res(0);
        
        if(str[0]=='-')
        {
            i++;
            flag++;
        }
        for(;i<str.length();i++)
        {
            if(str[i]>='0' and str[i]<='9')
                res=(res*10)+str[i]-'0';
            else
                return -1;
        }
        
        if(flag)
            res*=-1;
        
        
        return res;
    }



int atoi(string str) {
        
        int res(0);  //For the Final Result
        int i(0);   // for traversing the string
        int flag(0); // for checking -negative number
        
        if(str[0]=='-')  //if num is neg set flag=1
        {
            i=1;
            flag=1;
        }
        for(;i<str.length();i++)  //iterate over string
        {
            if(str[i]>=48 && str[i]<=57)  //check whether string is valid or not
            { 
                res=res*10+(str[i]-48);   // addition of genric representation of digits
            } 
            else
                return -1;  //string is not valid return the -1
        }
        
        if(flag)
            res=res*-1;   // if string is neg then make it pos
        
        
        
        return res;  // return the result.
       
    }
