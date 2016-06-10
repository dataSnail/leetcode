class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoNumbers;
        vector<int> tem = nums;
        for(int i = 0;i<nums.size();i++){
            tem.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            for(int j = nums.size()-1;j>i;j--){
                if(nums[i]+nums[j]==target){
                    for(int k=0;k<tem.size();k++){
                        if(tem[k]==nums[i]||tem[k]==nums[j]){
                            twoNumbers.push_back(k);
                        }
                        if(twoNumbers.size()==2)
                            return twoNumbers;
                    }
                }
            }
        }
        return twoNumbers;
    }
};