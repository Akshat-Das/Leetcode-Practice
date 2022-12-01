class Solution {
public:
    bool halvesAreAlike(string s) {
        std::array<int, 2> frequencies{};
        int midPos{static_cast<int>(s.size() /2)};
        for(int index = 0; index < s.size(); ++index){
            if(isVowel(s[index])){
                ++frequencies.at((index < midPos) ? (0) : (1));
            }
        }
        return frequencies.at(0) == frequencies.at(1);
    }
private:
    bool isVowel(char letter){
        static constexpr char* vowelStrs {"aeiouAEIOU"};
        auto iter = std::find_if(
            vowelStrs,
                 (vowelStrs + 10),
                 [letter](char vowel)
                  {
                      return letter == vowel;
                  });
        return (iter != (vowelStrs + 10));
    }
};