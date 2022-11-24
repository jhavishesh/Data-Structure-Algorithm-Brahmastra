// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string1956/1/#


//Solution:

int valid(string &s, int l, int r) 
   {
        while(l >= 0 and r < s.size() and s[l] == s[r]) {
            l--;
            r++;
        }
        return r-l-1; //length of palindrome string
    }
    
    string longestPalindrome(string s) {
        int n = s.size(), mx_len = 0, start = 0;
        for(int i=0; i<n; i++) 
        {
            int len1 = valid(s, i, i); ///racecar
            int len2 = valid(s, i, i+1);//aabaa
            int len = max(len1, len2);
            if(len > mx_len) {
                mx_len = len;   //finding the substring from string 
                start = i - ((mx_len-1)/2);
            }
        }
        string ans = s.substr(start, mx_len);
        return ans;
    }
