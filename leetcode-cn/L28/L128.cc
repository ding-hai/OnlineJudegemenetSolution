class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        int result = 1;
        std::unordered_set<int> s1;
        
        for (const int& n : nums) {
            s1.insert(n);
        }

        for (const int& num : s1) {
            if (s1.count(num-1))
                continue;
            int len = 0;
            int start = num;
            for (auto it = s1.find(start); it != s1.end();
                 it = s1.find(++start)) {
                ++len;
            }
            result = std::max(result, len);
        }

        return result;
    }
};