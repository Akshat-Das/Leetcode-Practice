class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string N_str = sorted_num(n);
        for (int i = 0; i < 30; i++)
            if (N_str == sorted_num(1 << i)) return true;
        return false;
    }
    
    string sorted_num(int n) {
        string res = to_string(n);
        sort(res.begin(), res.end());
        return res;
    }
};