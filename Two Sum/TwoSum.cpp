class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++) {
            int k = target;
            k = k - nums[i];
            vector<int>::iterator it;
            it=find(nums.begin(), nums.end(),k);
            if (it != nums.end() && (it - nums.begin() != i))
            {
                v.push_back(i);
                v.push_back(it - nums.begin());
                break;

            }
        }
        return v;
    }  
};