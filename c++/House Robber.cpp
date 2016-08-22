class Solution {
public:
    int rob(vector<int>& nums) {
        int max_sum[nums.size()];
        int last_chosen[nums.size()];
        if(nums.size()<1) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return nums[1]>nums[0]?nums[1]:nums[0];
        //0
        max_sum[0]=nums[0];
        last_chosen[0]=1;
        //1
        if(nums[1]>nums[0]){
            max_sum[1]=nums[1];
            last_chosen[1]=1;
        }else{
            max_sum[1]=nums[0];
            last_chosen[1]=0;
        }
        
        int tem_max1,tem_max2;
        for(size_t i = 2;i<nums.size();i++){
            if(last_chosen[i-1]==0){
                max_sum[i]=nums[i]+max_sum[i-1];
                last_chosen[i]=1;
            }else{
                if(max_sum[i-2]+nums[i]>max_sum[i-1]){
                    max_sum[i]=max_sum[i-2]+nums[i];
                    last_chosen[i]=1;
                }else{
                    max_sum[i]=max_sum[i-1];
                    last_chosen[i]=0;
                }
            }
        }
        return max_sum[nums.size()-1];
    }
};