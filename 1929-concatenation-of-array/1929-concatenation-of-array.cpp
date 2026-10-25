class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // vector<int> ans;
        // for(int i = 0; i < 2; i++) {
        //     for(int j = 0; j < nums.size(); j++) {
        //         ans.push_back(nums[j]);
        //     }
        // }
        // return ans;
        int vec_size = nums.size();
        nums.reserve(2*vec_size);
        for(int i = 0; i < vec_size; i++) {
            nums.push_back(nums[i]);
        }
        return nums;


    }
};