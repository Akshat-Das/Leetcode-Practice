class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> transform;
    for(auto word : words) {
        string code = "";
        for(auto ch : word)
            code += morse_code[ch - 'a'];
        transform.insert(code);
    }
    return transform.size();
    }
};