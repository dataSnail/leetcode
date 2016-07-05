class Solution {
public:
    int searchInsert2(vector<int> a, int s,int e,int t){
        int h= (s+e)/2;
        int r = -1;
        int n=h;
        if(s>=e)
            return e;
        if(a[h]==t){
            r = h;
        }else if(a[h]>t){
            r = searchInsert2(a,s,h,t);
        }else{
            r = searchInsert2(a,h+1,e,t);
        }
        
        return r;
    }
    int searchInsert(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         return i;
        //     }else if(nums[i]>target){
        //         if(i-1>=0)return i;
        //         else return 0;
        //     }
        // }
        // return nums.size();
        return searchInsert2(nums,0,nums.size(),target);
        
    }
};