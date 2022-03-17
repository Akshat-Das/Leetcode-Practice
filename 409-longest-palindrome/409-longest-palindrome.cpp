class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> d;
        for(char i : s)
        {
            d[i]++;
        }
        int count = 0,oddcount = 0;
        for(char i : s)
        {
            if(d[i] != 0)
            {
                count += d[i]/2;
                if(d[i]%2 == 1) oddcount =1;
                d[i] = 0;
            }
        }
        return (count*2 + oddcount);
    }
};

