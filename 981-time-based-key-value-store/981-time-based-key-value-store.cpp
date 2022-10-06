class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        if(mp.find(key) !=  mp.end()){
            mp[key].push_back(make_pair(timestamp, value));
        }
        else{
            vector<pair<int, string> > v;
            v.push_back(make_pair(timestamp, value));
            mp[key] = v;
        }
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) != mp.end()){
            int l = 0 ,r = mp[key].size() - 1;
            int it = -1;
            while(l <= r){
                int mid = (l+r)/2;
                int temp = mp[key][mid].first;
                if(temp <= timestamp){
                    it = mid;
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            if(it == -1){
                return "";
            }
            else{
                return mp[key][it].second;
            }
        }
        else{
            return "";
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */