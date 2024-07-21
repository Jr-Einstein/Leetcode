class Solution {
public:

    int leastBricks(vector<vector<int>>& wall) {
        map<int, int> mp;

        for(auto w: wall) {
            int sum{};
            for(int x: w) {
                sum += x;
                mp[sum]++;
            }
        }

        int m1{INT_MIN}, m2{INT_MIN};
        for(auto x: mp) {
            if(x.second > m1) {
                m2 = m1;
                m1 = x.second;
            } else if(x.second > m2) {
                m2 = x.second;
            }
        }
        return m2 == INT_MIN ? wall.size() : wall.size() - m2;
    }
};