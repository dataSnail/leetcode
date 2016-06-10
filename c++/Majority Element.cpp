class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number = nums[0];
        int count = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=number){
                count--;
                if(count==0){
                    number = nums[i];
                    count =1;
                }
            }else{
                count++;
            }
        }
        return number;
    }
};