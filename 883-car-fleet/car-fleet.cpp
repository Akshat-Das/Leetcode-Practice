class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pr;
        int numberOfFleets = position.size();
        if (numberOfFleets == 1)
            return numberOfFleets;
        for (int i = 0; i < numberOfFleets; i++)
            pr.push_back({position[i], speed[i]});
        sort(pr.begin(), pr.end());
        vector<float> numberOfSteps(numberOfFleets);
        for (int i = 0; i < numberOfFleets; i++)
            numberOfSteps[i] = (target - pr[i].first) / (float)pr[i].second;
        for (int i = position.size() - 1; i > 0; i--){
            if (numberOfSteps[i] >= numberOfSteps[i - 1]){
                numberOfFleets--;
                numberOfSteps[i - 1] = numberOfSteps[i];
            }
        }
        return numberOfFleets;
    }
};