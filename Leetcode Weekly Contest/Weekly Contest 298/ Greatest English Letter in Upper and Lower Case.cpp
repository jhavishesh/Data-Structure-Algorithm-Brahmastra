//https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/


//Solution:

/* We have to find the greatest character that is being repeated.
So we start checking from z to a if there exist an uppercase for that lowercase alphabet.
If there exists, it will be the greatest one as we have started from 'z' that is biggest.  */



string greatestLetter(string s) {
        string a="";
        for(char c='z';c>='a';c--)
        {
            if(find(s.begin(), s.end(), c)!=s.end() && find(s.begin(), s.end(), toupper(c))!=s.end())
            {
                a=toupper(c);
                return a;
            }
        }
        return "";
    }
