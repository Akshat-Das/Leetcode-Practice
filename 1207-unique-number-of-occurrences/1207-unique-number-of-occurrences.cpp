class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        int loc = 0;
        for (int i : arr) {
            freq[i]++;
            arr[loc++] = 0;
        }
        for (auto p : freq) {
            if (arr[p.second - 1] != 0) {
                return false;
            }
            arr[p.second - 1] = p.first;
        }
        return true;
    }
};