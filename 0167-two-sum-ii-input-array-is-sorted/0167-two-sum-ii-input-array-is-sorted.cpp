class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size() - 1; 
        vector<int> ans;
        int currsum = 0;
        while(st < end) {
            currsum = numbers[st] + numbers[end];
            if(target == currsum) {
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(currsum > target) end--;
            else st++;
        }
        return ans;
    }
};