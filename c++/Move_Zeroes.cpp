//use while,a bit confusing; 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int i = 0;
    	while (i<nums.size()){
    		if (nums[i] != 0){
    			i++;
    			continue;
    		}
    		int j = i + 1;
    		while (j<nums.size()){
    			if (nums[j] != 0){
    				swap(nums[i], nums[j]);
    				j++;
    				break;
    			}
    			j++;
    		}
    		i++;
    	}
    }
};

//use for instead
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	for (int i = 0; i < nums.size();i++){
    		if (nums[i] != 0){
    			continue;
    		}
    		for (int j = i + 1; j < nums.size();j++){
    			if (nums[j] != 0){
    				swap(nums[i], nums[j]);
    				break;
    			}
    		}
    	}
    }
};