class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) 
            return false;
        int freq1[26] = {0}, freq2[26] = {0};
        for (int i = 0; i < word1.size(); ++i) {
            ++freq1[word1[i] - 'a'];
            ++freq2[word2[i] - 'a'];
        }
        unordered_map<int, int> mm1, mm2;
        for (int i = 0; i < 26; ++i)
            if (freq1[i] != freq2[i]) {
                if (!freq1[i] || !freq2[i])
                    return false;
                ++mm1[freq1[i]];
                ++mm2[freq2[i]];
            }
        return mm1 == mm2;
    }
};