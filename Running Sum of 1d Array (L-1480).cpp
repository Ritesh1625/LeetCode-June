//*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> ans;
        
        int n = nums.size();
        int preSum = 0;
        
        for(int i=0; i<n; i++){
            preSum += nums[i];
            ans.push_back(preSum);
        }
        
        return ans;
    }
};


// Ideal solution:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
            
        }
        return nums;
    }
};

