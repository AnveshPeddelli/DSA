class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> hash;
        for(int i = 0; i < nums.size(); ++i)
        {
            auto diff = target - nums[i];
            if(hash.count(diff))
            {
                return {hash[diff], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};