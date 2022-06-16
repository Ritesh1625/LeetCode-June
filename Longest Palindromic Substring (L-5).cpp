class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        int dp[n][n];
        string str ="";     
        for(int gap =0; gap<n; gap++){
            for(int i =0, j = gap; j< n; i++, j++){
                if(gap == 0){
                    // string length is 1  like a, b, c, than is plaindrome of itself
                    dp[i][j] = 1;
                }else if (gap ==1){
                    if(s[i] == s[j]){
                      dp[i][j] =1;//palindrome 
                    }else{
                        dp[i][j] =0;// not a palindrome;
                    }
                }else{
                    //gap >= 2
                    if(s[i] == s[j] && dp[i+1][j-1] ==1){
                        dp[i][j] =1;
                    }else{
                        dp[i][j] = 0;
                    }
                }
               if(dp[i][j] && j - i + 1 > str.size())  
                    str = s.substr(i, j - i + 1);  
                    
              }     
            }       
        
        return str;
    }
};
